@interface PBSlideMaster : PBSlideBase

+ (void)setSlideMasterTextStyles:(id)a0 state:(id)a1;
+ (id)createMasterStyleMap:(id)a0 state:(id)a1;
+ (void)flattenBaseMasterStyleType:(int)a0 masterStyleMap:(id)a1;
+ (void)flattenMasterStyleType:(int)a0 baseType:(int)a1 masterStyleMap:(id)a2;
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)a0 layoutType:(int)a1 masterStyleMap:(id)a2;
+ (void)flattenTextStyle:(id)a0 intoTextBox:(id)a1;
+ (void)padMissingLevels:(id)a0;
+ (void)readMasterDrawables:(id)a0 slideHolder:(id)a1 state:(id)a2;
+ (void)readSlideMasterColorScheme:(id)a0 slideHolder:(id)a1 state:(id)a2;
+ (void)readSlideMasterName:(id)a0 slideHolder:(id)a1 state:(id)a2;
+ (void)readSlideMasterTextStyles:(id)a0 slideHolder:(id)a1 state:(id)a2;
+ (void)setCannedOtherTextListStyle:(id)a0;
+ (void)setFont:(id)a0 fromCharacterProperties:(id)a1;
+ (id)textBodyForPlaceholderType:(int)a0 slideLayout:(id)a1;
+ (int)textTypeFor:(int)a0 placeholderType:(int)a1;

@end
