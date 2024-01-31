@class NSString, NSNumber, BRFieldStructureSignature;

@interface BRCLocalStatInfo : BRCStatInfo

@property (readonly, nonatomic) BRFieldStructureSignature *versionSignature;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (nonatomic) unsigned char itemScope;
@property (retain, nonatomic) NSString *rawBouncedLogicalName;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (retain, nonatomic) NSString *fpCreationItemIdentifier;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSNumber *processingStamp;
@property (readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;

+ (id)_finderTagsFromImportObject:(id)a0;
+ (char)modeFromImportObject:(id)a0 isPackageFault:(BOOL)a1;

- (id)logicalName;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setFilename:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)checkStateWithItemID:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
- (void)_markDead;
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)a0;
- (void)_moveItemAsideWithUUIDString;
- (void)_setCKInfo:(id)a0;
- (void)_setItemScope:(unsigned char)a0;
- (void)_updateStatMeta:(id)a0;
- (id)descriptionWithContext:(id)a0 origName:(id)a1;
- (unsigned long long)diffAgainstLocalInfo:(id)a0;
- (id)initAsShareAcceptFaultWithName:(id)a0 mode:(char)a1 isDirectory:(BOOL)a2;
- (id)initWithLocalStatInfo:(id)a0;
- (void)_clearBouncedName;
- (void)_markChildPropagationComplete;
- (void)_markNeedsPropertiesPropagatedToChildren;
- (void)_markZombieForCrossZoneMove;
- (void)_updateStatAliasMeta:(id)a0;
- (void)_updateStatMetaFromServer:(id)a0;
- (void)bumpLocalChangeCount;
- (void)clearCKInfo;
- (id)initWithImportObject:(id)a0 error:(id *)a1;
- (void)setFilename:(id)a0 forceBouncedLogicalName:(id)a1 serverName:(id)a2;
- (void)updateFromImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1;
- (void)updateWithFileSystemFlags:(unsigned long long)a0 ignoreExecutable:(BOOL)a1;

@end
