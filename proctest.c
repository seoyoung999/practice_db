
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    "proctest.pc"
};


static unsigned int sqlctx = 162699;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {13,8};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,30,89,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,106,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,17,363,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,367,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,373,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,
132,0,0,3,0,0,15,410,0,0,0,0,0,1,0,
147,0,0,4,0,0,24,479,0,0,1,1,0,1,0,1,97,0,0,
166,0,0,5,0,0,29,484,0,0,0,0,0,1,0,
181,0,0,6,0,0,31,489,0,0,0,0,0,1,0,
196,0,0,3,0,0,17,525,0,0,1,1,0,1,0,1,97,0,0,
215,0,0,3,0,0,45,529,0,0,0,0,0,1,0,
230,0,0,3,0,0,13,532,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,
277,0,0,3,0,0,15,551,0,0,0,0,0,1,0,
292,0,0,7,0,0,24,568,0,0,1,1,0,1,0,1,97,0,0,
311,0,0,8,0,0,29,573,0,0,0,0,0,1,0,
326,0,0,9,0,0,31,578,0,0,0,0,0,1,0,
341,0,0,3,0,0,17,627,0,0,1,1,0,1,0,1,97,0,0,
360,0,0,3,0,0,45,629,0,0,0,0,0,1,0,
375,0,0,3,0,0,13,631,0,0,8,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,2,9,0,0,2,9,0,0,
422,0,0,3,0,0,15,635,0,0,0,0,0,1,0,
437,0,0,3,0,0,15,655,0,0,0,0,0,1,0,
452,0,0,10,0,0,24,692,0,0,1,1,0,1,0,1,97,0,0,
471,0,0,11,0,0,24,701,0,0,1,1,0,1,0,1,97,0,0,
490,0,0,12,0,0,29,705,0,0,0,0,0,1,0,
505,0,0,13,0,0,31,710,0,0,0,0,0,1,0,
520,0,0,3,0,0,17,799,0,0,1,1,0,1,0,1,97,0,0,
539,0,0,3,0,0,45,803,0,0,0,0,0,1,0,
554,0,0,3,0,0,13,810,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
593,0,0,3,0,0,15,842,0,0,0,0,0,1,0,
608,0,0,14,0,0,24,899,0,0,1,1,0,1,0,1,97,0,0,
627,0,0,15,0,0,29,904,0,0,0,0,0,1,0,
642,0,0,16,0,0,31,910,0,0,0,0,0,1,0,
657,0,0,3,0,0,17,945,0,0,1,1,0,1,0,1,97,0,0,
676,0,0,3,0,0,45,949,0,0,0,0,0,1,0,
691,0,0,3,0,0,13,953,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
722,0,0,3,0,0,15,968,0,0,0,0,0,1,0,
737,0,0,17,0,0,24,984,0,0,1,1,0,1,0,1,97,0,0,
756,0,0,18,0,0,29,989,0,0,0,0,0,1,0,
771,0,0,19,0,0,31,995,0,0,0,0,0,1,0,
786,0,0,3,0,0,17,1040,0,0,1,1,0,1,0,1,97,0,0,
805,0,0,3,0,0,45,1042,0,0,0,0,0,1,0,
820,0,0,3,0,0,13,1044,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
859,0,0,3,0,0,15,1048,0,0,0,0,0,1,0,
874,0,0,3,0,0,15,1067,0,0,0,0,0,1,0,
889,0,0,20,0,0,24,1098,0,0,1,1,0,1,0,1,97,0,0,
908,0,0,21,0,0,29,1103,0,0,0,0,0,1,0,
923,0,0,22,0,0,31,1108,0,0,0,0,0,1,0,
938,0,0,3,0,0,17,1198,0,0,1,1,0,1,0,1,97,0,0,
957,0,0,3,0,0,45,1202,0,0,0,0,0,1,0,
972,0,0,3,0,0,13,1208,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1011,0,0,3,0,0,15,1240,0,0,0,0,0,1,0,
1026,0,0,23,0,0,24,1298,0,0,1,1,0,1,0,1,97,0,0,
1045,0,0,24,0,0,29,1303,0,0,0,0,0,1,0,
1060,0,0,25,0,0,31,1308,0,0,0,0,0,1,0,
1075,0,0,3,0,0,17,1342,0,0,1,1,0,1,0,1,97,0,0,
1094,0,0,3,0,0,45,1346,0,0,0,0,0,1,0,
1109,0,0,3,0,0,13,1349,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1148,0,0,3,0,0,15,1368,0,0,0,0,0,1,0,
1163,0,0,26,0,0,24,1385,0,0,1,1,0,1,0,1,97,0,0,
1182,0,0,27,0,0,29,1390,0,0,0,0,0,1,0,
1197,0,0,28,0,0,31,1395,0,0,0,0,0,1,0,
1212,0,0,3,0,0,17,1440,0,0,1,1,0,1,0,1,97,0,0,
1231,0,0,3,0,0,45,1442,0,0,0,0,0,1,0,
1246,0,0,3,0,0,13,1444,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1285,0,0,3,0,0,15,1448,0,0,0,0,0,1,0,
1300,0,0,3,0,0,15,1466,0,0,0,0,0,1,0,
1315,0,0,29,0,0,24,1497,0,0,1,1,0,1,0,1,97,0,0,
1334,0,0,30,0,0,24,1502,0,0,1,1,0,1,0,1,97,0,0,
1353,0,0,31,0,0,29,1506,0,0,0,0,0,1,0,
1368,0,0,32,0,0,31,1511,0,0,0,0,0,1,0,
1383,0,0,3,0,0,17,1572,0,0,1,1,0,1,0,1,97,0,0,
1402,0,0,3,0,0,45,1576,0,0,0,0,0,1,0,
1417,0,0,3,0,0,13,1582,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
1444,0,0,3,0,0,15,1611,0,0,0,0,0,1,0,
1459,0,0,33,0,0,24,1655,0,0,1,1,0,1,0,1,97,0,0,
1478,0,0,34,0,0,29,1660,0,0,0,0,0,1,0,
1493,0,0,35,0,0,31,1665,0,0,0,0,0,1,0,
1508,0,0,3,0,0,17,1696,0,0,1,1,0,1,0,1,97,0,0,
1527,0,0,3,0,0,45,1700,0,0,0,0,0,1,0,
1542,0,0,3,0,0,13,1703,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
1569,0,0,3,0,0,15,1717,0,0,0,0,0,1,0,
1584,0,0,36,0,0,24,1734,0,0,1,1,0,1,0,1,97,0,0,
1603,0,0,37,0,0,29,1739,0,0,0,0,0,1,0,
1618,0,0,38,0,0,31,1744,0,0,0,0,0,1,0,
1633,0,0,3,0,0,17,1784,0,0,1,1,0,1,0,1,97,0,0,
1652,0,0,3,0,0,45,1786,0,0,0,0,0,1,0,
1667,0,0,3,0,0,13,1788,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
1694,0,0,3,0,0,15,1792,0,0,0,0,0,1,0,
1709,0,0,3,0,0,15,1807,0,0,0,0,0,1,0,
1724,0,0,39,0,0,24,1831,0,0,1,1,0,1,0,1,97,0,0,
1743,0,0,40,0,0,24,1840,0,0,1,1,0,1,0,1,97,0,0,
1762,0,0,41,0,0,29,1844,0,0,0,0,0,1,0,
1777,0,0,42,0,0,31,1849,0,0,0,0,0,1,0,
};


#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

#define getch() _getch()
//-----------------------------------------

#include < windows.h >
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
void clrscr(void) ;
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void db_connect();

void patient_main_tuple();
void medical_main_tuple();
void doctor_main_tuple();
void department_main_tuple();

void patient_select_tuple();
void patient_insert_tuple();
void patient_delete_tuple();
void patient_update_tuple();

void medical_select_tuple();
void medical_insert_tuple();
void medical_delete_tuple();
void medical_update_tuple();

void doctor_select_tuple();
void doctor_insert_tuple();
void doctor_delete_tuple();
void doctor_update_tuple();

void department_select_tuple();
void department_insert_tuple();
void department_delete_tuple();
void department_update_tuple();

void sql_error();
void trim_trailing_spaces(char *str);

int Error_flag = 0;
void main()
{
    char c = 0;

    _putenv("NLS_LANG=American_America.KO16KSC5601"); 

    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7에러발생:"); */ 


    db_connect();

    while( c != '5') {  
   
        clrscr();

        print_screen("main.txt") ;
        gotoxy(48,15);

        
        c = getchar() ;
        while (getchar() != '\n'); 

        switch(c){
            case '1' : patient_main_tuple();
                         break;
            case '2' : medical_main_tuple();
                         break;
            case '3' : doctor_main_tuple();
                         break;
            case '4' : department_main_tuple();
                         break;
            default : break ;
   
        }      
    }
    
    clrscr();
    /* EXEC SQL COMMIT WORK RELEASE ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 0;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


}

void db_connect()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

    /* EXEC SQL END DECLARE SECTION; */ 


    strcpy(uid.arr,"b20223141@//sedb2.deu.ac.kr:1521/orcl");
    uid.len =  strlen(uid.arr);
    strcpy(pwd.arr,"20223141");
    pwd.len = strlen(pwd.arr);

    Error_flag = 0 ;  

    /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )20;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )82;
    sqlstm.sqhsts[0] = (         int  )82;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&pwd;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )22;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if ( Error_flag ==1 ){
        exit(-1);
    }
}

void trim_trailing_spaces(char *str) {
    char *end;
    end = str + strlen(str) - 1;
    while (end > str && *end == ' ') {
        *end = '\0';
        end--;
    }
}

void medical_main_tuple() {
    char c = 0;

    while (c != '5') {
        clrscr();
        print_screen("medical_main.txt");
        gotoxy(48, 15);

        c = getchar();
        while (getchar() != '\n');  

        switch (c) {
            case '1': 
                medical_select_tuple(); 
                break;
            case '2': 
                medical_insert_tuple();  
                break;
            case '3': 
                medical_delete_tuple(); 
                break;
            case '4': 
                medical_update_tuple();  
                break;
            case '5': 
                return;  
            default:
                printf("잘못된 입력입니다. 다시 선택하세요.\n");
                getch();  
                break;
        }
    }
}

void patient_main_tuple() {
    char c = 0;

    while (c != '5') {
        clrscr();
        print_screen("patient_main.txt");
        gotoxy(48, 15);

        c = getchar();
        while (getchar() != '\n');  

        switch (c) {
            case '1': 
                patient_select_tuple(); 
                break;
            case '2': 
                patient_insert_tuple();  
                break;
            case '3': 
                patient_delete_tuple(); 
                break;
            case '4': 
                patient_update_tuple();  
                break;
            case '5': 
                return;  
            default:
                printf("잘못된 입력입니다. 다시 선택하세요.\n");
                getch();  
                break;
        }
    }
}


void doctor_main_tuple() {
    char c = 0;

    while (c != '5') {
        clrscr();
        print_screen("doctor_main.txt");
        gotoxy(48, 15);

        c = getchar();
        while (getchar() != '\n');  

        switch (c) {
            case '1': 
                doctor_select_tuple(); 
                break;
            case '2': 
                doctor_insert_tuple();  
                break;
            case '3': 
                doctor_delete_tuple(); 
                break;
            case '4': 
                doctor_update_tuple();  
                break;
            case '5': 
                return;  
            default:
                printf("잘못된 입력입니다. 다시 선택하세요.\n");
                getch();  
                break;
        }
    }
}

void department_main_tuple() {
    char c = 0;

    while (c != '5') {
        clrscr();
        print_screen("department_main.txt");
        gotoxy(48, 15);

        c = getchar();
        while (getchar() != '\n');  

        switch (c) {
            case '1': 
                department_select_tuple(); 
                break;
            case '2': 
                department_insert_tuple();  
                break;
            case '3': 
                department_delete_tuple(); 
                break;
            case '4': 
                department_update_tuple();  
                break;
            case '5': 
                return;  
            default:
                printf("잘못된 입력입니다. 다시 선택하세요.\n");
                getch();  
                break;
        }
    }
}



#define PAGE_NUM 5
void patient_select_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve patient information
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_PhoneNumber[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_PhoneNumber;

    /* varchar v_NationalID[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_NationalID;

    /* varchar v_Height[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Height;

    /* varchar v_Weight[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Weight;

    /* varchar v_BloodType[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_BloodType;

    /* varchar v_Gender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Gender;


    char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


char pno_temp[16] = "";
char pname_temp[50] = "";
char phone_temp[15] = "";
char nid_temp[20] = "";
char height_temp[10] = "";
char weight_temp[10] = "";
char blood_temp[5] = "";
char gender_temp[10] = "";

int x, y, count = 0, i;

clrscr();

print_screen("patient_select.txt");

gotoxy(45, 5);
gets(pno_temp);

gotoxy(76, 5);
gets(pname_temp);

gotoxy(45, 7);
gets(gender_temp);

gotoxy(76, 7);
gets(nid_temp);

gotoxy(45, 9);
gets(blood_temp);

gotoxy(76, 9);
gets(phone_temp);

gotoxy(45, 11);
gets(height_temp);

gotoxy(76, 11);
gets(weight_temp);


sprintf(sqlstmt, "SELECT PatientID, PatientName, Gender, NationalID, BloodType, PhoneNumber, Height, Weight FROM Patient WHERE 1=1");

if (strlen(pno_temp) > 0) {
    strcat(sqlstmt, " AND PatientID LIKE '%%");
    strcat(sqlstmt, pno_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(pname_temp) > 0) {
    strcat(sqlstmt, " AND PatientName LIKE '%%");
    strcat(sqlstmt, pname_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(gender_temp) > 0) {
    strcat(sqlstmt, " AND Gender LIKE '%%");
    strcat(sqlstmt, gender_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(nid_temp) > 0) {
    strcat(sqlstmt, " AND NationalID LIKE '%%");
    strcat(sqlstmt, nid_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(blood_temp) > 0) {
    strcat(sqlstmt, " AND BloodType LIKE '%%");
    strcat(sqlstmt, blood_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(phone_temp) > 0) {
    strcat(sqlstmt, " AND PhoneNumber LIKE '%%");
    strcat(sqlstmt, phone_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(height_temp) > 0) {
    strcat(sqlstmt, " AND Height LIKE '%%");
    strcat(sqlstmt, height_temp);
    strcat(sqlstmt, "%%'");
}
if (strlen(weight_temp) > 0) {
    strcat(sqlstmt, " AND Weight LIKE '%%");
    strcat(sqlstmt, weight_temp);
    strcat(sqlstmt, "%%'");
}

/* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 4;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )51;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (         void  *)sqlstmt;
sqlstm.sqhstl[0] = (unsigned int  )1000;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



/* EXEC SQL DECLARE pc_cursor CURSOR FOR S; */ 


/* EXEC SQL OPEN pc_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 4;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )70;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



x = 2;
y = 13;

    while (1) {
        /* EXEC SQL FETCH pc_cursor INTO :v_PatientID, :v_PatientName, :v_Gender, :v_NationalID, :v_BloodType, :v_PhoneNumber, :v_Height, :v_Weight ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )85;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_PatientID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_PatientName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_Gender;
        sqlstm.sqhstl[2] = (unsigned int  )12;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_NationalID;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_BloodType;
        sqlstm.sqhstl[4] = (unsigned int  )7;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_PhoneNumber;
        sqlstm.sqhstl[5] = (unsigned int  )17;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_Height;
        sqlstm.sqhstl[6] = (unsigned int  )12;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&v_Weight;
        sqlstm.sqhstl[7] = (unsigned int  )12;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) { 
            break;
        }

        v_PatientID.arr[v_PatientID.len] = '\0';
        v_PatientName.arr[v_PatientName.len] = '\0';
	v_Gender.arr[v_Gender.len] = '\0';
	v_NationalID.arr[v_NationalID.len] = '\0';
	v_BloodType.arr[v_BloodType.len] = '\0';
        v_PhoneNumber.arr[v_PhoneNumber.len] = '\0';
        v_Height.arr[v_Height.len] = '\0';
        v_Weight.arr[v_Weight.len] = '\0';
        
        gotoxy(x, y);
        printf("\n \n  %-10s %-15s %-9s %-20s %-5s %-15s %-10s %-8s", 
               v_PatientID.arr, v_PatientName.arr, v_Gender.arr, v_NationalID.arr,
 		v_BloodType.arr, v_PhoneNumber.arr,  
		v_Height.arr, v_Weight.arr );
        y++;
        count++;

        if (count == PAGE_NUM) {
            printf("\n\n                                  hit any key for next\n");
            count = 0;
            getch();
            gotoxy(0, 14); 
            for (i = 0; i < PAGE_NUM; i++) { 
                printf("\n                                                                                                   ");
            }
            y = 13;
        }
    }
    printf("\n");
    printf("                          match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE pc_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )132;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    getch();
}
void patient_insert_tuple() 
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    char sqlstmt[1000];

    /* EXEC SQL END DECLARE SECTION; */ 


    char v_PatientID[16];
    char v_PatientName[50];
    char v_PhoneNumber[15];
    char v_NationalID[20];
    char v_Height[10];
    char v_Weight[10];
    char v_BloodType[5];
    char v_Gender[10];

    int x, y;

    clrscr();
    print_screen("patient_insert.txt");

    x = 43;
    y = 6;

    gotoxy(x, y);
    gets(v_PatientID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_PatientName);

    y = y + 2;
    gotoxy(x, y);
    gets(v_Gender);

    y = y + 2;
    gotoxy(x, y);
    gets(v_NationalID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_BloodType);

    y = y + 2;
    gotoxy(x, y);
    gets(v_PhoneNumber);

    y = y + 2;
    gotoxy(x, y);
    gets(v_Height);

    y = y + 2;
    gotoxy(x, y);
    gets(v_Weight);

    sprintf(
        sqlstmt,
        "INSERT INTO Patient (PatientID, PatientName, PhoneNumber, NationalID, Height, Weight, BloodType, Gender) "
        "VALUES ('%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s')",
        v_PatientID, v_PatientName, v_PhoneNumber, v_NationalID, v_Height, v_Weight, v_BloodType, v_Gender
    );

    Error_flag = 0;

    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )147;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) { 
        printf("\n");
        printf(" 정상적으로 추가되었습니다. 아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )166;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");
        printf(" 튜플이 추가되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )181;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}

void patient_delete_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_PhoneNumber[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_PhoneNumber;

    /* varchar v_NationalID[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_NationalID;

    /* varchar v_Height[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Height;

    /* varchar v_Weight[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Weight;

    /* varchar v_BloodType[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_BloodType;

    /* varchar v_Gender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Gender;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char pid[16];
    char flag = 'n';
    int x, y;

    clrscr();
    print_screen("patient_delete.txt");

    x = 38;
    y = 6;

    gotoxy(x, y);
    gets(pid);

    sprintf(sqlstmt, "SELECT PatientID, PatientName, PhoneNumber, NationalID, Height, Weight, BloodType, Gender FROM Patient WHERE PatientID = '%s'", pid);


    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )196;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE pd_cursor CURSOR FOR S; */ 


    /* EXEC SQL OPEN pd_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )215;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    while (1) {
        /* EXEC SQL FETCH pd_cursor INTO :v_PatientID, :v_PatientName, :v_PhoneNumber, :v_NationalID, :v_Height, :v_Weight, :v_BloodType, :v_Gender; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )230;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_PatientID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_PatientName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_PhoneNumber;
        sqlstm.sqhstl[2] = (unsigned int  )17;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_NationalID;
        sqlstm.sqhstl[3] = (unsigned int  )22;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_Height;
        sqlstm.sqhstl[4] = (unsigned int  )12;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_Weight;
        sqlstm.sqhstl[5] = (unsigned int  )12;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&v_BloodType;
        sqlstm.sqhstl[6] = (unsigned int  )7;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&v_Gender;
        sqlstm.sqhstl[7] = (unsigned int  )12;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) { 
            break;
        }

        v_PatientID.arr[v_PatientID.len] = '\0';
        v_PatientName.arr[v_PatientName.len] = '\0';
        v_PhoneNumber.arr[v_PhoneNumber.len] = '\0';
        v_NationalID.arr[v_NationalID.len] = '\0';
        v_Height.arr[v_Height.len] = '\0';
        v_Weight.arr[v_Weight.len] = '\0';
        v_BloodType.arr[v_BloodType.len] = '\0';
        v_Gender.arr[v_Gender.len] = '\0';

        printf("\n\n");
        printf("                     환자번호: %s\n                     이름: %s\n                     전화번호: %s\n                     주민등록번호: %s\n                     키: %s\n                     몸무게: %s\n                     혈액형: %s\n                     성별: %s\n",
               v_PatientID.arr, v_PatientName.arr, v_PhoneNumber.arr, v_NationalID.arr, v_Height.arr, v_Weight.arr, v_BloodType.arr, v_Gender.arr);
    }
    /* EXEC SQL CLOSE pd_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )277;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlerrd[2] == 0) {
        printf("검색된 데이터가 없습니다. 아무키나 치세요");
        getch();
        return;
    }

    printf("\n                      위의 데이터를 삭제하시겠습니까? (y/n) :");
    flag = getchar();
    while (getchar() != '\n'); 

    if (flag == 'y' || flag == 'Y') {
        sprintf(sqlstmt, "DELETE FROM Patient WHERE PatientID = '%s'", pid);

        Error_flag = 0;

        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )292;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (Error_flag == 0) {  
            printf("\n");
            printf(" 정상적으로 삭제되었습니다. 아무키나 치세요 \n");
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )311;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        } else {  
            printf("\n");
            printf(" 데이터가 삭제되지 않았습니다. 아무키나 치세요 \n");
            /* EXEC SQL ROLLBACK WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )326;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
    } else { 
        printf("\n");
        printf("삭제가 취소되었습니다.\n");
        printf("메인 메뉴로 가기: 아무키나 치세요.");
        getch();
    }

    return;
}



void patient_update_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_PhoneNumber[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_PhoneNumber;

    /* varchar v_NationalID[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_NationalID;

    /* varchar v_Height[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Height;

    /* varchar v_Weight[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Weight;

    /* varchar v_BloodType[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_BloodType;

    /* varchar v_Gender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_Gender;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char findno[16];
    char name[50];
    char phone[15];
    char height[10];
    char weight[10];
    char old_name[50];  

    int x, y;

    clrscr();
    print_screen("patient_update.txt");

    x = 40;
    y = 6;

    gotoxy(x, y);
    gets(findno);

    sprintf(sqlstmt, "SELECT PatientID, PatientName, PhoneNumber, NationalID, Height, Weight, BloodType, Gender FROM Patient WHERE PatientID = '%s'", findno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )341;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


    /* EXEC SQL DECLARE pu_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN pu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )360;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL FETCH pu_cursor INTO :v_PatientID, :v_PatientName, :v_PhoneNumber, :v_NationalID, :v_Height, :v_Weight, :v_BloodType, :v_Gender; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )375;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_PatientID;
    sqlstm.sqhstl[0] = (unsigned int  )18;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_PatientName;
    sqlstm.sqhstl[1] = (unsigned int  )52;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_PhoneNumber;
    sqlstm.sqhstl[2] = (unsigned int  )17;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&v_NationalID;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&v_Height;
    sqlstm.sqhstl[4] = (unsigned int  )12;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&v_Weight;
    sqlstm.sqhstl[5] = (unsigned int  )12;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)&v_BloodType;
    sqlstm.sqhstl[6] = (unsigned int  )7;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqhstv[7] = (         void  *)&v_Gender;
    sqlstm.sqhstl[7] = (unsigned int  )12;
    sqlstm.sqhsts[7] = (         int  )0;
    sqlstm.sqindv[7] = (         void  *)0;
    sqlstm.sqinds[7] = (         int  )0;
    sqlstm.sqharm[7] = (unsigned int  )0;
    sqlstm.sqadto[7] = (unsigned short )0;
    sqlstm.sqtdso[7] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlcode == 1403) {  
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        /* EXEC SQL CLOSE pu_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )422;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
        return;
    }

    v_PatientID.arr[v_PatientID.len] = '\0';
    v_PatientName.arr[v_PatientName.len] = '\0';
    v_PhoneNumber.arr[v_PhoneNumber.len] = '\0';
    v_NationalID.arr[v_NationalID.len] = '\0';
    v_Height.arr[v_Height.len] = '\0';
    v_Weight.arr[v_Weight.len] = '\0';
    v_BloodType.arr[v_BloodType.len] = '\0';
    v_Gender.arr[v_Gender.len] = '\0';

    strcpy(old_name, v_PatientName.arr); 

    printf("\n");
    printf("   환자 ID: %s, 이름: %s, 전화번호: %s,\n   주민등록번호: %s, 키: %s, 몸무게: %s, 혈액형: %s, 성별: %s\n",
           v_PatientID.arr, v_PatientName.arr, v_PhoneNumber.arr, v_NationalID.arr, v_Height.arr, v_Weight.arr, v_BloodType.arr, v_Gender.arr);

    /* EXEC SQL CLOSE pu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )437;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 45;
    y = 13;

    gotoxy(x, y);
    gets(name);
    if (name[0] == '\0') {
        strcpy(name, v_PatientName.arr);
    }

    y += 2;
    gotoxy(x, y);
    gets(phone);
    if (phone[0] == '\0') {
        strcpy(phone, v_PhoneNumber.arr);
    }

    y += 2;
    gotoxy(x, y);
    gets(height);
    if (height[0] == '\0') {
        strcpy(height, v_Height.arr);
    }

    y += 2;
    gotoxy(x, y);
    gets(weight);
    if (weight[0] == '\0') {
        strcpy(weight, v_Weight.arr);
    }

    sprintf(sqlstmt,
            "UPDATE Patient SET PatientName = '%s', PhoneNumber = '%s', Height = '%s', Weight = '%s' WHERE PatientID = '%s'",
            name, phone, height, weight, findno);

    Error_flag = 0;
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )452;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) {
        sprintf(sqlstmt,
                "UPDATE Medical "
                "SET PatientName = '%s' "
                "WHERE PatientName = '%s'",
                name, old_name);

        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )471;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        printf("\n");
        printf(" 환자 정보가 수정되었습니다. 아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )490;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");
        printf(" 수정되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )505;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}






#define PAGE_NUM 5
void medical_select_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_MedicalID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_MedicalID;

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

    /* varchar v_MedicalDate[12]; */ 
struct { unsigned short len; unsigned char arr[12]; } v_MedicalDate;

    /* varchar v_Expense[12]; */ 
struct { unsigned short len; unsigned char arr[12]; } v_Expense;


   char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char mno_temp[16] = "";
   char pno_temp[16] = "";
   char mpname_temp[50] = "";
   char date_temp[12] = "";
   char mdname_temp[50] = "";
   char expense_temp[12] = "";

   int x, y, count = 0, i ;

   clrscr();

   print_screen("medical_select.txt");

   gotoxy(38, 5);
   gets(mno_temp); 
   
   gotoxy(70, 5);
   gets(pno_temp);
   
   gotoxy(38, 7);
   gets(date_temp);

   gotoxy(70, 7);
   gets(mpname_temp); 
   
   gotoxy(38, 9);
   gets(mdname_temp);

   sprintf(sqlstmt, "SELECT MedicalID, PatientID, PatientName, DoctorName, TO_CHAR(MedicalDate, 'YYYY-MM-DD') AS MedicalDate, Expense FROM Medical WHERE 1=1");

   if (strlen(mno_temp) > 0) {
       strcat(sqlstmt, " AND to_char(MedicalID) LIKE '%%");
       strcat(sqlstmt, mno_temp);
       strcat(sqlstmt, "%%'");
   }
   if (strlen(pno_temp) > 0) {
       strcat(sqlstmt, " AND PatientID LIKE '%%");
       strcat(sqlstmt, pno_temp);
       strcat(sqlstmt, "%%'");
   }
   if (strlen(mpname_temp) > 0) {
       strcat(sqlstmt, " AND PatientName LIKE '%%");
       strcat(sqlstmt, mpname_temp);
       strcat(sqlstmt, "%%'");
   }
   if (strlen(mdname_temp) > 0) {
       strcat(sqlstmt, " AND DoctorName LIKE '%%");
       strcat(sqlstmt, mdname_temp);
       strcat(sqlstmt, "%%'");
   }
   if (strlen(date_temp) > 0) {
       strcat(sqlstmt, " AND MedicalDate LIKE '%%");
       strcat(sqlstmt, date_temp);
       strcat(sqlstmt, "%%'");
   }
   if (strlen(expense_temp) > 0) {
       strcat(sqlstmt, " AND Expense LIKE '%%");
       strcat(sqlstmt, expense_temp);
       strcat(sqlstmt, "%%'");
   }

   /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )520;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)sqlstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



   /* EXEC SQL DECLARE mc_cursor CURSOR FOR S; */ 


   /* EXEC SQL OPEN mc_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 8;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )539;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



   x = 2;
   y = 13;

     while (1)
    {
        /* EXEC SQL FETCH mc_cursor INTO :v_MedicalID, :v_PatientID, :v_PatientName, :v_DoctorName, :v_MedicalDate, :v_Expense; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )554;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_MedicalID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_PatientID;
        sqlstm.sqhstl[1] = (unsigned int  )18;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_PatientName;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_DoctorName;
        sqlstm.sqhstl[3] = (unsigned int  )52;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_MedicalDate;
        sqlstm.sqhstl[4] = (unsigned int  )14;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_Expense;
        sqlstm.sqhstl[5] = (unsigned int  )14;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


       
        if (sqlca.sqlcode == 1403) { 
            break;
        }
        v_MedicalID.arr[v_MedicalID.len] = '\0';
        v_PatientID.arr[v_PatientID.len] = '\0';
        v_PatientName.arr[v_PatientName.len] = '\0';
        v_DoctorName.arr[v_DoctorName.len] = '\0';
        v_MedicalDate.arr[v_MedicalDate.len] = '\0';
        v_Expense.arr[v_Expense.len] = '\0';


        gotoxy(x, y);
        printf("  %-10s %-12s %-15s %-15s %-12s %-12s", v_MedicalID.arr, v_PatientID.arr, v_PatientName.arr, v_DoctorName.arr, v_MedicalDate.arr, v_Expense.arr);
        y++;
        count++;
        if (count == PAGE_NUM) {
            printf("\n\n                                  hit any key for next\n");
            count = 0;
            getch();

            gotoxy(0, 13); 
            for (i = 0; i < PAGE_NUM; i++) {
                printf("                                                                                               \n");
            }
            y = 13;
        }
    }
    printf("\n");   
    printf("                          match tuple no : %d\n ", sqlca.sqlerrd[2]);
    printf("\n \n \n ");
    /* EXEC SQL CLOSE mc_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )593;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    getch(); 

}
void medical_insert_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


    char sqlstmt[1000];

/* EXEC SQL END DECLARE SECTION; */ 


    char v_MedicalID[16];
    char v_PatientID[16];
    char v_PatientName[50];
    char v_DoctorName[50];
    char v_MedicalDate[12];
    char v_Expense[12];

    int x, y ;

   clrscr();
   print_screen("medical_insert.txt");

    x = 42;
    y = 6 ;

    gotoxy(x, y);
    gets(v_MedicalID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_PatientID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_PatientName);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorName);

    y = y + 2;
    gotoxy(x, y);
    gets(v_MedicalDate);

    y = y + 2;
    gotoxy(x, y);
    gets(v_Expense);
   
        sprintf(
        sqlstmt,
        "insert into Medical(MedicalID, PatientID, PatientName, DoctorName, MedicalDate, Expense) values (%s, '%s', '%s', '%s',TO_DATE('%s', 'YYYY-MM-DD'), %s)", v_MedicalID, v_PatientID, v_PatientName, v_DoctorName, v_MedicalDate, v_Expense);

    Error_flag = 0 ;

    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )608;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if( Error_flag == 0 ) { 
        printf("\n");   
        printf(" 정상적으로 추가되었습니다.  아무키나 치세요 \n" ) ;
        /* EXEC SQL COMMIT WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )627;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    else {
        printf("\n");   
        printf(" 튜플이 추가되지 않았습니다. 아무키나 치세요 \n" ) ;
        /* EXEC SQL ROLLBACK WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )642;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}

void medical_delete_tuple()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_MedicalID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_MedicalID;

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

 
    char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


    char  mno[16] ;
    char  flag = 'n' ;
    int x, y ;
int i;

   clrscr();
   print_screen("medical_delete.txt");

    x = 38;
    y = 6 ;

    gotoxy(x,y)  ; 
    gets(mno) ;


    sprintf(sqlstmt,"SELECT MedicalID, PatientID, PatientName, DoctorName  FROM Medical where MedicalID = %s", mno) ;

    /* EXEC SQL PREPARE S FROM :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )657;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE md_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN md_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )676;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}

 

    while(1)
    {
        /* EXEC SQL FETCH md_cursor INTO v_MedicalID, :v_PatientID, :v_PatientName, :v_DoctorName ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )691;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_MedicalID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_PatientID;
        sqlstm.sqhstl[1] = (unsigned int  )18;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_PatientName;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_DoctorName;
        sqlstm.sqhstl[3] = (unsigned int  )52;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if(sqlca.sqlcode == 1403) { 
            break;
        }

        v_MedicalID.arr[v_MedicalID.len] = '\0';
        v_PatientID.arr[v_PatientID.len] = '\0';
        v_PatientName.arr[v_PatientName.len] = '\0';
        v_DoctorName.arr[v_DoctorName.len] = '\0';


        printf("\n\n");
        printf("                     진료번호:%s\n                     환자번호:%s\n                     환자 이름:%s\n                     주치의 이름:%s \n", v_MedicalID.arr, v_PatientID.arr, v_PatientName.arr, v_DoctorName.arr);
    }
    /* EXEC SQL CLOSE md_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )722;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}

 

    if ( sqlca.sqlerrd[2] == 0 ) {
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        getch();
        return ;
    }

    printf("\n                      위의 투플들을 삭제하시겠습니까? (y/n) :");   

    flag = (char *)getchar() ;
    while (getchar() != '\n'); 

    if( flag == 'y' || flag =='Y' ){
        sprintf(sqlstmt,"delete from Medical where MedicalID = %s ", mno);
        Error_flag = 0 ;
        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )737;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if( Error_flag == 0 ) {  
            printf("\n");   
            printf(" 정상적으로 삭제되었습니다.  아무키나 치세요 \n" ) ;
            /* EXEC SQL COMMIT WORK ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )756;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
        else {  
            printf("\n");   
            printf(" 튜플이 삭제되지 않았습니다. 아무키나 치세요 \n" ) ;
            /* EXEC SQL ROLLBACK WORK ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )771;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
    }
    else { 
        printf("\n");   
        printf("삭제 취소\n");
        printf("메인메뉴로 가기 : 아무키나 치세요. ");
        getch();
    }
    return;
}


void medical_update_tuple()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_MedicalID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_MedicalID;

    /* varchar v_PatientID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_PatientID;

    /* varchar v_PatientName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_PatientName;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

    /* varchar v_MedicalDate[13]; */ 
struct { unsigned short len; unsigned char arr[13]; } v_MedicalDate;

    /* varchar v_Expense[12]; */ 
struct { unsigned short len; unsigned char arr[12]; } v_Expense;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char findno[16];
    char mdname[50];
    char date[13];
    char expense[12];

    int x, y;

    clrscr();
    print_screen("medical_update.txt");

    x = 40;
    y = 6;

    gotoxy(x, y);
    gets(findno);

    sprintf(sqlstmt, "SELECT MedicalID, PatientID, PatientName, DoctorName, TO_CHAR(MedicalDate, 'YYYY-MM-DD') AS MedicalDate, Expense FROM Medical WHERE MedicalID = %s", findno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )786;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


    /* EXEC SQL DECLARE mu_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN mu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )805;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        /* EXEC SQL FETCH mu_cursor INTO :v_MedicalID, :v_PatientID, :v_PatientName, :v_DoctorName, :v_MedicalDate, :v_Expense; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )820;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_MedicalID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_PatientID;
        sqlstm.sqhstl[1] = (unsigned int  )18;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_PatientName;
        sqlstm.sqhstl[2] = (unsigned int  )52;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_DoctorName;
        sqlstm.sqhstl[3] = (unsigned int  )52;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_MedicalDate;
        sqlstm.sqhstl[4] = (unsigned int  )15;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_Expense;
        sqlstm.sqhstl[5] = (unsigned int  )14;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlcode == 1403) {  
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        /* EXEC SQL CLOSE mu_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )859;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
        return;
    }

        v_MedicalID.arr[v_MedicalID.len] = '\0';
        v_PatientID.arr[v_PatientID.len] = '\0';
        v_PatientName.arr[v_PatientName.len] = '\0';
        v_DoctorName.arr[v_DoctorName.len] = '\0';
        v_MedicalDate.arr[v_MedicalDate.len] = '\0';
        v_Expense.arr[v_Expense.len] = '\0';

	trim_trailing_spaces(v_PatientName.arr);
	trim_trailing_spaces(v_DoctorName.arr);

        printf("\n");
        printf("   진료번호: %s, 환자번호: %s, 환자이름: %s\n   주치의 이름: %s, 진료일자: %s, 비용: %s\n",
               v_MedicalID.arr, v_PatientID.arr, v_PatientName.arr, v_DoctorName.arr, v_MedicalDate.arr, v_Expense.arr);

    /* EXEC SQL CLOSE mu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )874;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 42;
    y = 13;

    gotoxy(x, y);
    gets(mdname);
    if (mdname[0] == '\0') {
        strcpy(mdname, v_DoctorName.arr);
    }

    y = y + 2;
    gotoxy(x, y);
    gets(date);
    if (date[0] == '\0') {
        strcpy(date, v_MedicalDate.arr);
    }

    y = y + 2;
    gotoxy(x, y);
    gets(expense);
    if (expense[0] == '\0') {
        strcpy(expense, v_Expense.arr);
    }

    sprintf(sqlstmt, 
            "UPDATE Medical SET DoctorName = '%s', MedicalDate = TO_DATE('%s', 'YYYY-MM-DD'), Expense = %s WHERE MedicalID = %s",
            mdname, date, expense, findno);

    Error_flag = 0;

    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )889;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) { 
        printf("\n");
        printf(" 수정되었습니다. 아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )908;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else { 
        printf("\n");
        printf(" 수정되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )923;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}





void doctor_select_tuple() {
    /* --------------------------------------------------------------------------
       Retrieve doctor information
    -------------------------------------------------------------------------- */
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DoctorID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DoctorID;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

    /* varchar v_DoctorPhone[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_DoctorPhone;

    /* varchar v_DoctorGender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorGender;

    /* varchar v_DoctorMesub[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorMesub;

    /* varchar v_DoctorRoom[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorRoom;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char docid_temp[16] = "";
    char docname_temp[50] = "";
    char docphone_temp[15] = "";
    char docgender_temp[10] = "";
    char docmesub_temp[50] = "";
    char docroom_temp[10] = "";

    int x, y, count = 0, i;

    clrscr();

    print_screen("doctor_select.txt");

    gotoxy(38, 5);
    gets(docid_temp);

    gotoxy(69, 5);
    gets(docname_temp);

    gotoxy(38, 7);
    gets(docphone_temp);

    gotoxy(69, 7);
    gets(docgender_temp);

    gotoxy(38, 9);
    gets(docmesub_temp);

    gotoxy(69, 9);
    gets(docroom_temp);

    sprintf(sqlstmt, "SELECT DoctorID, DoctorName, DoctorPhone, DoctorGender, DoctorMesub, DoctorRoom FROM Doctor WHERE 1=1");

    if (strlen(docid_temp) > 0) {
        strcat(sqlstmt, " AND DoctorID LIKE '%%");
        strcat(sqlstmt, docid_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(docname_temp) > 0) {
        strcat(sqlstmt, " AND DoctorName LIKE '%%");
        strcat(sqlstmt, docname_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(docphone_temp) > 0) {
        strcat(sqlstmt, " AND DoctorPhone LIKE '%%");
        strcat(sqlstmt, docphone_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(docgender_temp) > 0) {
        strcat(sqlstmt, " AND DoctorGender LIKE '%%");
        strcat(sqlstmt, docgender_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(docmesub_temp) > 0) {
        strcat(sqlstmt, " AND DoctorMesub LIKE '%%");
        strcat(sqlstmt, docmesub_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(docroom_temp) > 0) {
        strcat(sqlstmt, " AND DoctorRoom LIKE '%%");
        strcat(sqlstmt, docroom_temp);
        strcat(sqlstmt, "%%'");
    }


    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )938;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE dc_cursor CURSOR FOR S; */ 


    /* EXEC SQL OPEN dc_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )957;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 2;
    y = 13;

    while (1) {
        /* EXEC SQL FETCH dc_cursor INTO :v_DoctorID, :v_DoctorName, :v_DoctorPhone, :v_DoctorGender, :v_DoctorMesub, :v_DoctorRoom; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )972;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_DoctorID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_DoctorName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_DoctorPhone;
        sqlstm.sqhstl[2] = (unsigned int  )17;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_DoctorGender;
        sqlstm.sqhstl[3] = (unsigned int  )12;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_DoctorMesub;
        sqlstm.sqhstl[4] = (unsigned int  )52;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_DoctorRoom;
        sqlstm.sqhstl[5] = (unsigned int  )12;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) { 
            break;
        }
        v_DoctorID.arr[v_DoctorID.len] = '\0';
        v_DoctorName.arr[v_DoctorName.len] = '\0';
        v_DoctorPhone.arr[v_DoctorPhone.len] = '\0';
        v_DoctorGender.arr[v_DoctorGender.len] = '\0';
        v_DoctorMesub.arr[v_DoctorMesub.len] = '\0';
        v_DoctorRoom.arr[v_DoctorRoom.len] = '\0';

        gotoxy(x, y);
        printf("  %-8s %-13s %-14s %-8s %-14s %-10s",
               v_DoctorID.arr, v_DoctorName.arr, v_DoctorPhone.arr, v_DoctorGender.arr, v_DoctorMesub.arr, v_DoctorRoom.arr);
        y++;
        count++;
        if (count == PAGE_NUM) {
            printf("\n\n                                  hit any key for next\n");
            count = 0;
            getch();

            gotoxy(0, 13); 
            for (i = 0; i < PAGE_NUM; i++) {
                printf("                                                                                               \n");
            }
            y = 13;
        }
    }
    printf("\n");
    printf("                          match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE dc_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1011;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    getch();  
}

void doctor_insert_tuple()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    char sqlstmt[1000];

    /* EXEC SQL END DECLARE SECTION; */ 


    char v_DoctorID[16];
    char v_DoctorName[50];
    char v_DoctorPhone[15];
    char v_DoctorGender[10];
    char v_DoctorMesub[50];
    char v_DoctorRoom[10];

    int x, y;

    clrscr();
    print_screen("doctor_insert.txt");

    x = 42;
    y = 6;

    gotoxy(x, y);
    gets(v_DoctorID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorName);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorPhone);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorGender);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorMesub);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DoctorRoom);

    sprintf(
        sqlstmt,
        "INSERT INTO Doctor(DoctorID, DoctorName, DoctorPhone, DoctorGender, DoctorMesub, DoctorRoom) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')",
        v_DoctorID, v_DoctorName, v_DoctorPhone, v_DoctorGender, v_DoctorMesub, v_DoctorRoom);

    Error_flag = 0;

    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1026;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) {  
        printf("\n");    
        printf(" 정상적으로 추가되었습니다.  아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1045;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");    
        printf(" 튜플이 추가되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1060;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}


void doctor_delete_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DoctorID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DoctorID;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

    /* varchar v_DoctorPhone[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DoctorPhone;

    /* varchar v_DoctorGender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorGender;

    /* varchar v_DoctorMesub[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorMesub;

    /* varchar v_DoctorRoom[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorRoom;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char dno[16];
    char flag = 'n';
    int x, y;

    clrscr();
    print_screen("doctor_delete.txt");

    x = 38;
    y = 6;

    gotoxy(x, y);
    gets(dno);

    sprintf(sqlstmt, "SELECT DoctorID, DoctorName, DoctorPhone, DoctorGender, DoctorMesub, DoctorRoom FROM Doctor WHERE DoctorID = '%s'", dno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1075;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE dd_cursor CURSOR FOR S; */ 


    /* EXEC SQL OPEN dd_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1094;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    while (1) {
        /* EXEC SQL FETCH dd_cursor INTO :v_DoctorID, :v_DoctorName, :v_DoctorPhone, :v_DoctorGender, :v_DoctorMesub, :v_DoctorRoom; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1109;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_DoctorID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_DoctorName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_DoctorPhone;
        sqlstm.sqhstl[2] = (unsigned int  )18;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_DoctorGender;
        sqlstm.sqhstl[3] = (unsigned int  )12;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_DoctorMesub;
        sqlstm.sqhstl[4] = (unsigned int  )52;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_DoctorRoom;
        sqlstm.sqhstl[5] = (unsigned int  )12;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) {
            break;
        }

        v_DoctorID.arr[v_DoctorID.len] = '\0';
        v_DoctorName.arr[v_DoctorName.len] = '\0';
        v_DoctorPhone.arr[v_DoctorPhone.len] = '\0';
        v_DoctorGender.arr[v_DoctorGender.len] = '\0';
        v_DoctorMesub.arr[v_DoctorMesub.len] = '\0';
        v_DoctorRoom.arr[v_DoctorRoom.len] = '\0';


        printf("\n\n");
        printf("                     의사번호: %s\n                     의사명: %s\n", v_DoctorID.arr, v_DoctorName.arr);
        printf("                     전화번호: %s\n                     성별: %s\n", v_DoctorPhone.arr, v_DoctorGender.arr);
        printf("                     전공: %s\n                     진료실: %s\n", v_DoctorMesub.arr, v_DoctorRoom.arr);
    }
    /* EXEC SQL CLOSE dd_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1148;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlerrd[2] == 0) {
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        getch();
        return;
    }

    printf("\n                      위의 투플들을 삭제하시겠습니까? (y/n) :");

    flag = (char)getchar();
    while (getchar() != '\n');

    if (flag == 'y' || flag == 'Y') {
        sprintf(sqlstmt, "DELETE FROM Doctor WHERE DoctorID = '%s'", dno);

        Error_flag = 0;
        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1163;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (Error_flag == 0) {  
            printf("\n");
            printf(" 정상적으로 삭제되었습니다. 아무키나 치세요 \n");
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )1182;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        } else {  
            printf("\n");
            printf(" 튜플이 삭제되지 않았습니다. 아무키나 치세요 \n");
            /* EXEC SQL ROLLBACK WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )1197;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
    } else {  
        printf("\n");
        printf("삭제 취소\n");
        printf("메인메뉴로 가기 : 아무키나 치세요. ");
        getch();
    }
    return;
}


void doctor_update_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DoctorID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DoctorID;

    /* varchar v_DoctorName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorName;

    /* varchar v_DoctorPhone[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_DoctorPhone;

    /* varchar v_DoctorGender[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorGender;

    /* varchar v_DoctorMesub[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DoctorMesub;

    /* varchar v_DoctorRoom[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_DoctorRoom;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char findno[16];
    char name[50];
    char phone[15];
    char room[10];
    char old_name[50]; 

    char flag = 'n';
    int x, y;

    clrscr();
    print_screen("doctor_update.txt");

    x = 38;
    y = 6;

    gotoxy(x, y);
    gets(findno);

    sprintf(sqlstmt, "SELECT DoctorID, DoctorName, DoctorPhone, DoctorGender, DoctorMesub, DoctorRoom FROM Doctor WHERE DoctorID = '%s'", findno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1212;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


    /* EXEC SQL DECLARE du_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN du_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1231;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL FETCH du_cursor INTO :v_DoctorID, :v_DoctorName, :v_DoctorPhone, :v_DoctorGender, :v_DoctorMesub, :v_DoctorRoom; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1246;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_DoctorID;
    sqlstm.sqhstl[0] = (unsigned int  )18;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_DoctorName;
    sqlstm.sqhstl[1] = (unsigned int  )52;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_DoctorPhone;
    sqlstm.sqhstl[2] = (unsigned int  )17;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&v_DoctorGender;
    sqlstm.sqhstl[3] = (unsigned int  )12;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&v_DoctorMesub;
    sqlstm.sqhstl[4] = (unsigned int  )52;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)&v_DoctorRoom;
    sqlstm.sqhstl[5] = (unsigned int  )12;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlcode == 1403) {
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        /* EXEC SQL CLOSE du_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1285;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
        return;
    }

    v_DoctorID.arr[v_DoctorID.len] = '\0';
    v_DoctorName.arr[v_DoctorName.len] = '\0';
    v_DoctorPhone.arr[v_DoctorPhone.len] = '\0';
    v_DoctorGender.arr[v_DoctorGender.len] = '\0';
    v_DoctorMesub.arr[v_DoctorMesub.len] = '\0';
    v_DoctorRoom.arr[v_DoctorRoom.len] = '\0';

    strcpy(old_name, v_DoctorName.arr);

    printf("\n");
    printf("   의사 ID: %s, 이름: %s, 전화번호: %s, 성별: %s\n",
           v_DoctorID.arr, v_DoctorName.arr, v_DoctorPhone.arr, v_DoctorGender.arr);
    printf("   전공: %s, 진료실: %s\n", v_DoctorMesub.arr, v_DoctorRoom.arr);
    /* EXEC SQL CLOSE du_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1300;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 39;
    y = 13;

    gotoxy(x, y);
    gets(name);
    if (name[0] == '\0') {
        strcpy(name, v_DoctorName.arr);
    }

    y = y + 2;
    gotoxy(x, y);
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';
    if (phone[0] == '\0') {
        strcpy(phone, v_DoctorPhone.arr);
    }

    y = y + 2;
    gotoxy(x, y);
    gets(room);
    if (room[0] == '\0') {
        strcpy(room, v_DoctorRoom.arr);
    }

    sprintf(sqlstmt,
            "UPDATE Doctor SET DoctorName = '%s', DoctorPhone = '%s', DoctorRoom = '%s' WHERE DoctorID = '%s'",
            name, phone, room, findno);

    Error_flag = 0;
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1315;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) {
        sprintf(sqlstmt, "UPDATE Medical " "SET DoctorName = '%s' " "WHERE DoctorName = '%s'", name, old_name);

        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1334;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        printf("\n");
        printf(" 의사 정보가 수정되었습니다. 아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1353;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");
        printf(" 수정되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1368;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}






void department_select_tuple()
{
    /* --------------------------------------------------------------------------
       Retrieve department information
    -------------------------------------------------------------------------- */
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DepartmentID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DepartmentID;

    /* varchar v_DepartmentName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DepartmentName;

    /* varchar v_DepartmentPhone[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_DepartmentPhone;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char deptid_temp[16] = "";
    char deptname_temp[50] = "";
    char deptphone_temp[15] = "";

    int x, y, count = 0, i;

    clrscr();

    print_screen("department_select.txt");

    gotoxy(46, 5);
    gets(deptid_temp);

    gotoxy(71, 5);
    gets(deptname_temp);

    gotoxy(46, 7);
    gets(deptphone_temp);

    sprintf(sqlstmt, "SELECT DepartmentID, DepartmentName, DepartmentPhone FROM Department WHERE 1=1");

    if (strlen(deptid_temp) > 0) {
        strcat(sqlstmt, " AND DepartmentID LIKE '%%");
        strcat(sqlstmt, deptid_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(deptname_temp) > 0) {
        strcat(sqlstmt, " AND DepartmentName LIKE '%%");
        strcat(sqlstmt, deptname_temp);
        strcat(sqlstmt, "%%'");
    }
    if (strlen(deptphone_temp) > 0) {
        strcat(sqlstmt, " AND DepartmentPhone LIKE '%%");
        strcat(sqlstmt, deptphone_temp);
        strcat(sqlstmt, "%%'");
    }

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1383;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE dec_cursor CURSOR FOR S; */ 


    /* EXEC SQL OPEN dec_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1402;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 2;
    y = 12;

    while (1) {
        /* EXEC SQL FETCH dec_cursor INTO :v_DepartmentID, :v_DepartmentName, :v_DepartmentPhone; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1417;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_DepartmentID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_DepartmentName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_DepartmentPhone;
        sqlstm.sqhstl[2] = (unsigned int  )17;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) { 
            break;
        }
        v_DepartmentID.arr[v_DepartmentID.len] = '\0';
        v_DepartmentName.arr[v_DepartmentName.len] = '\0';
        v_DepartmentPhone.arr[v_DepartmentPhone.len] = '\0';

        gotoxy(x, y);
        printf("              %-15s %-22s %-15s", 
               v_DepartmentID.arr, v_DepartmentName.arr, v_DepartmentPhone.arr);
        y++;
        count++;
        if (count == PAGE_NUM) {
            printf("\n\n                                  hit any key for next\n");
            count = 0;
            getch();

            gotoxy(0, 12); 
            for (i = 0; i < PAGE_NUM; i++) {
                printf("                                                                                               \n");
            }
            y = 12;
        }
    }
    printf("\n");    
    printf("                          match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE dec_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1444;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    getch(); 
}


void department_insert_tuple()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    char sqlstmt[1000];

    /* EXEC SQL END DECLARE SECTION; */ 


    char v_DepartmentID[16];
    char v_DepartmentName[50];
    char v_DepartmentPhone[15];

    int x, y;

    clrscr();
    print_screen("department_insert.txt");

    x = 46;
    y = 6;

    gotoxy(x, y);
    gets(v_DepartmentID);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DepartmentName);

    y = y + 2;
    gotoxy(x, y);
    gets(v_DepartmentPhone);

    sprintf(
        sqlstmt,
        "INSERT INTO Department(DepartmentID, DepartmentName, DepartmentPhone) VALUES ('%s', '%s', '%s')",
        v_DepartmentID, v_DepartmentName, v_DepartmentPhone);

    Error_flag = 0;

    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1459;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) { 
        printf("\n");    
        printf(" 정상적으로 추가되었습니다.  아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1478;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");    
        printf(" 튜플이 추가되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1493;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    return;
}


void department_delete_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DepartmentID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DepartmentID;

    /* varchar v_DepartmentName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DepartmentName;

    /* varchar v_DepartmentPhone[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DepartmentPhone;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char dno[16];
    char flag = 'n';
    int x, y;

    clrscr();
    print_screen("department_delete.txt");

    x = 38;
    y = 6;

    gotoxy(x, y);
    gets(dno);

    sprintf(sqlstmt, "SELECT DepartmentID, DepartmentName, DepartmentPhone FROM Department WHERE DepartmentID = %s", dno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1508;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL DECLARE ded_cursor CURSOR FOR S; */ 


    /* EXEC SQL OPEN ded_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1527;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    while (1) {
        /* EXEC SQL FETCH ded_cursor INTO :v_DepartmentID, :v_DepartmentName, :v_DepartmentPhone; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1542;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_DepartmentID;
        sqlstm.sqhstl[0] = (unsigned int  )18;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_DepartmentName;
        sqlstm.sqhstl[1] = (unsigned int  )52;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_DepartmentPhone;
        sqlstm.sqhstl[2] = (unsigned int  )18;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (sqlca.sqlcode == 1403) { 
            break;
        }

        v_DepartmentID.arr[v_DepartmentID.len] = '\0';
        v_DepartmentName.arr[v_DepartmentName.len] = '\0';
        v_DepartmentPhone.arr[v_DepartmentPhone.len] = '\0';

        printf("\n\n");
        printf("                     부서번호:%s    부서명:%s\n                     부서전화번호:%s \n",
               v_DepartmentID.arr, v_DepartmentName.arr, v_DepartmentPhone.arr);
    }
    /* EXEC SQL CLOSE ded_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1569;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlerrd[2] == 0) {
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        getch();
        return;
    }

    printf("\n                      위의 투플들을 삭제하시겠습니까? (y/n) :");

    flag = (char)getchar();
    while (getchar() != '\n'); 

    if (flag == 'y' || flag == 'Y') {
        sprintf(sqlstmt, "DELETE FROM Department WHERE DepartmentID = %s", dno);

        Error_flag = 0;
        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1584;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if (Error_flag == 0) { 
            printf("\n");
            printf(" 정상적으로 삭제되었습니다. 아무키나 치세요 \n");
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )1603;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        } else {  
            printf("\n");
            printf(" 튜플이 삭제되지 않았습니다. 아무키나 치세요 \n");
            /* EXEC SQL ROLLBACK WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )1618;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
    } else {  
        printf("\n");
        printf("삭제 취소\n");
        printf("메인메뉴로 가기 : 아무키나 치세요. ");
        getch();
    }
    return;
}


void department_update_tuple() {
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_DepartmentID[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_DepartmentID;

    /* varchar v_DepartmentName[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } v_DepartmentName;

    /* varchar v_DepartmentPhone[15]; */ 
struct { unsigned short len; unsigned char arr[15]; } v_DepartmentPhone;


    char sqlstmt[1000];
    /* EXEC SQL END DECLARE SECTION; */ 


    char findno[16];
    char name[50];
    char phone[15];
    char old_name[50]; 

    int x, y;

    clrscr();
    print_screen("department_update.txt");

    x = 38;
    y = 6;

    gotoxy(x, y);
    gets(findno);

    sprintf(sqlstmt, "SELECT DepartmentID, DepartmentName, DepartmentPhone FROM Department WHERE DepartmentID = '%s'", findno);

    /* EXEC SQL PREPARE S FROM :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1633;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


    /* EXEC SQL DECLARE deu_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN deu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1652;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    /* EXEC SQL FETCH deu_cursor INTO :v_DepartmentID, :v_DepartmentName, :v_DepartmentPhone; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1667;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqfoff = (           int )0;
    sqlstm.sqfmod = (unsigned int )2;
    sqlstm.sqhstv[0] = (         void  *)&v_DepartmentID;
    sqlstm.sqhstl[0] = (unsigned int  )18;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&v_DepartmentName;
    sqlstm.sqhstl[1] = (unsigned int  )52;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&v_DepartmentPhone;
    sqlstm.sqhstl[2] = (unsigned int  )17;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (sqlca.sqlcode == 1403) {
        printf("검색된 투플이 없습니다. 아무키나 치세요");
        /* EXEC SQL CLOSE deu_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1694;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
        return;
    }

    v_DepartmentID.arr[v_DepartmentID.len] = '\0';
    v_DepartmentName.arr[v_DepartmentName.len] = '\0';
    v_DepartmentPhone.arr[v_DepartmentPhone.len] = '\0';

    strcpy(old_name, v_DepartmentName.arr); 

    printf("\n");
    printf("   부서 ID: %s, 이름: %s, 전화번호: %s\n",
           v_DepartmentID.arr, v_DepartmentName.arr, v_DepartmentPhone.arr);

    /* EXEC SQL CLOSE deu_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1709;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    x = 43;
    y = 13;

    gotoxy(x, y);
    gets(name);
    if (name[0] == '\0') {
        strcpy(name, v_DepartmentName.arr);
    }

    y = y + 2;
    gotoxy(x, y);
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0'; 
    if (phone[0] == '\0') { 
        strcpy(phone, v_DepartmentPhone.arr);
    }

    sprintf(sqlstmt,
            "UPDATE Department SET DepartmentName = '%s', DepartmentPhone = '%s' WHERE DepartmentID = '%s'",
            name, phone, findno);

    Error_flag = 0;
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 8;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1724;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if (Error_flag == 0) {
        sprintf(sqlstmt,
                "UPDATE Doctor "
                "SET DoctorMesub = '%s' "
                "WHERE DoctorMesub = '%s'",
                name, old_name);

        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1743;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        printf("\n");
        printf(" 부서 정보가 수정되었습니다. 아무키나 치세요 \n");
        /* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1762;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    } else {
        printf("\n");
        printf(" 수정되지 않았습니다. 아무키나 치세요 \n");
        /* EXEC SQL ROLLBACK WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1777;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }

    return;
}


void print_screen(char fname[])
{
    FILE *fp;
    char line[100];

    if ( (fp = fopen(fname,"r"))  == NULL ){
        printf("file open error\n");
        getch();
        exit(-1);
    }
    while(1) {
        if( fgets(line, 99, fp) == NULL){
            break;
        }
        printf("%s", line);
    }

    fclose(fp);
}

/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;
    int x, y ;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    getxy(&x, &y); 

    Error_flag = 1; 

    gotoxy(1,22) ; 

    printf("%s", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    gotoxy(x, y) ;  
}

#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 120*28, Cur, &dwLen);
    gotoxy(0,0);
}

/*---------------------------------------------------------*/
