@class BRCSharedClientZone, BRCSyncContext, NSString;

@interface BRCSharedServerZone : BRCServerZone {
    NSString *_ownerName;
}

@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContext;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContextIfExists;
@property (readonly, nonatomic) BRCSharedClientZone *clientZone;

- (id)ownerName;
- (void).cxx_destruct;
- (long long)_propagateDeleteToChildrenOfItemID:(id)a0;
- (BOOL)_propagateFolderDeletesToTheirChildren;
- (void)addForegroundClient:(id)a0;
- (BOOL)allocateRanksWhenCaughtUp:(BOOL)a0;
- (id)asSharedZone;
- (id)initWithMangledID:(id)a0 dbRowID:(id)a1 plist:(id)a2 session:(id)a3;
- (void)removeForegroundClient:(id)a0;
- (void)sideCarZoneWasReset;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 db:(id)a1;

@end
