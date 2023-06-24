#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

typedef struct optrstack
{
    char oper[30];
    int loc;
}OPStack;
void initop(OPStack& op)
{
    int  i;
    op.loc = 0;
    for (i = 0; i < 30; i++)op.oper[i] = '\0';
}
void push(OPStack& op, char c)
{
    op.oper[op.loc++] = c;
}
char pop(OPStack& op)
{
    return(op.oper[--op.loc]);
}
typedef struct opndstack
{
    int oper[60];
    int loc;
}OPndStack;
void initopnd(OPndStack& op)
{
    int  i;
    op.loc = 0;
    for (i = 0; i < 30; i++)op.oper[i] = '\0';
}
void pushopnd(OPndStack& op, int c)
{
    op.oper[op.loc++] = c;
}
int popopnd(OPndStack& op)
{
    return(op.oper[--op.loc]);
}
void init(char s[])
{
    int t;
    printf("\n请输入任意一个命题公式（命题变元为一个字符）\n");
    printf("非、析取、合取、条件、双条件词分别用符号!、|、&、-、+表示\n");
    cin>>s;
    t = strlen(s);
    s[t] = '@';
    s[t + 1] = '\0';
}
int is_optr(char c)
{
    char optr_list[] = "+-|&!()@";
    for (int i = 0; i < (int)strlen(optr_list); i++) if (c == optr_list[i])return 1;
    return 0;
}
char first(char op1, char op2)
{
    char tab[8][9] = {
          "><<<<<>>",
    ">><<<<>>",
    ">>><<<>>",
    ">>>><<>>",
    ">>>>><>>",
    "<<<<<<=E",
    ">>>>>E>>",
    "<<<<<<E=",
    };
    char optr_list[] = "+-|&!()@";//双条件、条件、析取、合取、非
    int op1_loc, op2_loc;
    for (op1_loc = 0; op1_loc < (int)strlen(optr_list); op1_loc++)if (optr_list[op1_loc] == op1)break;
    for (op2_loc = 0; op2_loc < (int)strlen(optr_list); op2_loc++)if (optr_list[op2_loc] == op2)break;
    return tab[op1_loc][op2_loc];
}
int operate(int x, char op, int y)
{
    switch (op) {
    case '+': return (((!x) || y) && (x || (!y))); break;
    case '-': return ((!x) || y); break;
    case '|': return x || y; break;
    case '&': return x && y; break;
    }
    return -1;
}
void divi(char s[], char c[])
{
    int i, j = 0, t;
    for (i = 0; s[i] != '@'; i++) if (!is_optr(s[i])) { for (t = 0; t < j; t++) if (c[t] == s[i]) break;  if (t == j)c[j++] = s[i]; }
    c[j] = '\0';
    char aa;
    for (i = 0; i < j - 1; i++)//按字典序排序
        for (t = i + 1; t < j; t++) if (c[i] > c[t]) { aa = c[i]; c[i] = c[t]; c[t] = aa; }
}
int locate(char s[], char c)
{
    int i;
    for (i = 0; i < (int)strlen(s); i++) if (s[i] == c)break;
    return i;
}
int calc(char s[100], int* p)
{
    char myopnd[10], c;
    int sloc = 0;
    OPStack optr;
    initop(optr);
    push(optr, '@');
    OPndStack  opnd;
    initopnd(opnd);
    divi(s, myopnd);
    c = s[sloc++];
    while (c != '@' || optr.oper[optr.loc - 1] != '@') {
        if (!is_optr(c)) { int d1;  d1 = p[locate(myopnd, c)];  pushopnd(opnd, d1);  c = s[sloc++]; }
        else {
            switch (first(optr.oper[optr.loc - 1], c)) {
            case '<': push(optr, c);  c = s[sloc++];  break;
            case '=': pop(optr);  c = s[sloc++];  break;
            case '>': char op;  op = pop(optr);
                if (op == '!') { int a;  a = !popopnd(opnd);  pushopnd(opnd, a); }
                else {
                    int a, b;  a = popopnd(opnd);  b = popopnd(opnd);
                    int res;  res = operate(b, op, a);  pushopnd(opnd, res);
                }
                break;
            }
        }
    }
    return opnd.oper[opnd.loc - 1];
}
void main()
{
    //（1）求任意一个命题公式的真值表:
    cout << "求任意一个命题公式的真值表:" << endl;
    char exp[100], myopnd[10];
    int i, j, n, m, A[1024][10], flag, k;
    int F[1024];
    init(exp);
    divi(exp, myopnd);
    n = (int)strlen(myopnd);
    m = (int)pow(2, n);
    for (j = 0; j < n; j++) {
        flag = 1;
        k = (int)pow(2, n - j - 1);
        for (i = 0; i < m; i++) {
            if (!(i % k))flag = !flag;
            if (flag)A[i][j] = 1;
            else  A[i][j] = 0;
        }
    }
    char ss[100];
    int t;
    strcpy(ss, exp);
    t = (int)strlen(ss);
    ss[t - 1] = '\0';
    printf("命题公式%s的真值表如下：\n", ss);
    for (j = 0; j < n; j++)printf("%4c", myopnd[j]);
    printf("   %s\n", ss);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)printf("%4d", A[i][j]);
        F[i] = calc(exp, A[i]);
        printf("%6d", F[i]);
        printf("\n");
    }
  //  （2）利用真值表求任意一个命题公式的主范式。
    // 计算主合取范式
    printf("\n命题公式%s的主合取范式为：\n", ss);
    for (i = 0; i < m; i++) {
        if (F[i] == 0) continue;
        printf("(");
        for (j = 0; j < n; j++) {
            if (A[i][j] == 0) printf("%c", myopnd[j]);
            else printf("!%c", myopnd[j]);
            if (j != n - 1 && A[i + 1][j + 1] == 1) printf("&");
        }
        printf(")");
        if (i != m - 1 && F[i + 1]) printf("|");
    }

    // 计算主析取范式
    printf("\n命题公式%s的主析取范式为：\n", ss);
    for (i = 0; i < m; i++) {
        if (F[i] == 1) continue;
        printf("(");
        for (j = 0; j < n; j++) {
            if (A[i][j] == 1) printf("%c", myopnd[j]);
            else printf("!%c", myopnd[j]);
            if (j != n - 1 && A[i + 1][j + 1] == 1) printf("|");
        }
        printf(")");
        if (i != m - 1 && F[i + 1] == 0) printf("&");
    }
    cout << endl;


    //（3）判断两个命题公式是否等值。
    // 计算第一个命题公式的真值表
    //前面已经输入过第一个命题公式，其数据直接用就行
    cout << "请再输入一个命题公式，判断两个命题公式是否等值:" << endl;
     int F1[1024], F2[1024];
    divi(exp, myopnd);
    n = (int)strlen(myopnd);
    m = (int)pow(2, n);
    for (j = 0; j < n; j++)
for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        F1[i] = calc(exp, A[i]);
     
    }

    // 计算第二个命题公式的真值表
    char exp2[100], myopnd2[10];
    init(exp2);//插入新的命题公式,并计算其真值表
    divi(exp2, myopnd2);

    printf("第二个命题公式%s的真值表如下：\n", exp2);
    for (j = 0; j < n; j++)printf("%4c", myopnd2[j]);
    printf("   %s\n", exp2);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)printf("%4d", A[i][j]);
        F2[i] = calc(exp2, A[i]);
        printf("%6d", F2[i]);
        printf("\n");
      
    }
  printf("\n");
    // 判断两个命题公式是否等值
    int equal = 1;
    for (i = 0; i < m; i++) {
        if (F1[i] != F2[i]) {
            equal = 0;
            break;
        }
    }
    if (equal) printf("****两个命题公式相等\n");
    else printf("****两个命题公式不相等\n");

   
}


