@class UIColor, CLKDevice;

@interface NTKFaceViewComplicationFactory : NSObject

@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) double alpha;
@property (nonatomic) double contentSpecificAnimationDuration;
@property (readonly, nonatomic) CLKDevice *device;
@property (copy, nonatomic) id /* block */ foregroundColorProviderBlock;
@property (copy, nonatomic) id /* block */ platterColorProviderBlock;
@property (copy, nonatomic) id /* block */ alphaProviderBlock;

+ (id)_genericComplicationAnimationWithDuration:(double)a0 applier:(id /* block */)a1;

- (void).cxx_destruct;
- (void)cleanupAfterEditingForFaceView:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 attributes:(unsigned long long)a1 faceView:(id)a2;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 faceView:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)a0 faceView:(id)a1 forSlots:(id)a2;
- (id)detachedComplicationDisplaysForFaceView:(id)a0;
- (BOOL)fadesComplicationSlot:(id)a0 inEditMode:(long long)a1 faceView:(id)a2;
- (id)initForDevice:(id)a0;
- (double)keylineCornerRadiusForComplicationSlot:(id)a0 faceView:(id)a1;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1 faceView:(id)a2;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (double)minimumBreathingScaleForComplicationSlot:(id)a0 faceView:(id)a1;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)prepareForEditingForFaceView:(id)a0;
- (void)setAlpha:(double)a0 faceView:(id)a1;
- (void)setForegroundColor:(id)a0 faceView:(id)a1;
- (void)setPlatterColor:(id)a0 faceView:(id)a1;

@end
