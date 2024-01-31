@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)emphasisProperties;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleName;
+ (id)nullStyleWithContext:(id)a0;
+ (id)propertiesAllowingNSNull;

- (int)writingDirection;
- (BOOL)transformsFontSizes;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
