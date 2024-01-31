@class BRFieldCKInfo, BRCItemID, NSString, NSData, BRMangledID, BRCUserRowID;

@interface BRCStatInfo : NSObject <NSCopying> {
    NSData *_lazyXattr;
}

@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (retain, nonatomic) BRCItemID *parentID;
@property (nonatomic) char state;
@property (nonatomic) char type;
@property (nonatomic) char mode;
@property (retain, nonatomic) NSString *logicalName;
@property (nonatomic) long long birthtime;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic) long long favoriteRank;
@property (nonatomic, getter=isHiddenExt) BOOL hiddenExt;
@property (retain, nonatomic) NSData *finderTags;
@property (retain, nonatomic) NSData *xattrSignature;
@property (readonly, nonatomic) NSString *representableName;
@property (readonly, nonatomic) BRMangledID *_aliasTargetMangledID;
@property (readonly, nonatomic) NSString *aliasTarget;
@property (readonly, nonatomic) BOOL iWorkShareable;
@property (retain, nonatomic) NSString *trashPutBackPath;
@property (retain, nonatomic) BRCItemID *trashPutBackParentID;
@property (retain, nonatomic) BRCUserRowID *creatorRowID;

- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)description;
- (BOOL)isWritable;
- (void).cxx_destruct;
- (BOOL)isExecutable;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)checkStateWithItemID:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
- (id)_aliasTargetItemID;
- (void)_updateAliasTarget:(id)a0;
- (BOOL)check:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
- (id)descriptionWithContext:(id)a0 origName:(id)a1;
- (unsigned long long)diffAgainst:(id)a0;
- (id)initWithStatInfo:(id)a0;
- (BOOL)isEtagEqual:(id)a0;
- (id)lazyXattrWithSession:(id)a0;

@end
