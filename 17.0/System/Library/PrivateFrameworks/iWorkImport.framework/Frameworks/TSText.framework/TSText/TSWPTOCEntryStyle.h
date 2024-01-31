@interface TSWPTOCEntryStyle : TSWPParagraphStyle

+ (id)properties;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)presetKind;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 name:(id)a1 basedOnParagraphStyle:(id)a2;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (void)p_saveTOCEntryStylePropertiesToArchive:(void *)a0 archiver:(id)a1;
- (id)parentStyleForFixingOrphanVariation;

@end
