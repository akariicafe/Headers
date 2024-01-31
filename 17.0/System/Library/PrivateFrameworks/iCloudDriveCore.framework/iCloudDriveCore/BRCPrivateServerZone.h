@class NSError, BRCZonePurgeOperation, BRCPrivateClientZone;

@interface BRCPrivateServerZone : BRCServerZone {
    BRCZonePurgeOperation *_deleteAllContentsOperation;
    NSError *_deleteAllContentsOperationLastError;
}

@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCZonePurgeOperation *deleteAllContentsOperation;
@property (readonly, nonatomic) NSError *deleteAllContentsOperationLastError;
@property (readonly, nonatomic) BRCPrivateClientZone *clientZone;

- (void).cxx_destruct;
- (void)activateWithClientZone:(id)a0 offline:(BOOL)a1;
- (void)_checkResultSetIsEmpty:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 reason:(id)a2 result:(BOOL *)a3;
- (id)asPrivateZone;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)a0;
- (id)itemByParentID:(id)a0 andName:(id)a1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;

@end
