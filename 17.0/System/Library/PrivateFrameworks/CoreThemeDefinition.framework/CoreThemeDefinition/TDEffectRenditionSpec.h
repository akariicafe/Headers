@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSNumber *effectScale;
@property (retain, nonatomic) NSOrderedSet *components;
@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;

- (id)effectPreset;
- (BOOL)canBePackedWithDocument:(id)a0;
- (id)componentOfType:(unsigned int)a0;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)a0 withDocument:(id)a1;
- (void)setComponentsFromEffectPreset:(id)a0 withDocument:(id)a1;

@end
