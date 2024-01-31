@class NSString, TSWPParagraphStyle;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

@property (class, readonly) NSString *presetStyleDescriptor;

@property (retain, nonatomic) TSWPParagraphStyle *defaultParagraphStyle;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)layoutProperties;
+ (id)propertiesAllowingNSNull;
+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
+ (void)saveShapeStyleLayoutPropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
