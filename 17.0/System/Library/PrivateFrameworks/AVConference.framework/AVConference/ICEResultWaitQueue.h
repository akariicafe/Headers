@class NSMutableArray;

@interface ICEResultWaitQueue : NSObject {
    NSMutableArray *queryList;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } resCond;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } resMutex;
}

- (id)init;
- (void)dealloc;
- (void)addResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a0 forCallID:(unsigned int)a1;
- (id)copyResultForCallID:(unsigned int)a0;

@end
