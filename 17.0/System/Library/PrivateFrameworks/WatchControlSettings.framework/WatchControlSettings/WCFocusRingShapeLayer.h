@class NSString, CAShapeLayer;

@interface WCFocusRingShapeLayer : CAShapeLayer <WatchControlSettingsObserver>

@property (nonatomic) long long focusRingColor;
@property (nonatomic) BOOL increasedContrast;
@property (retain, nonatomic) CAShapeLayer *innerFocusOutlineLayer;
@property (retain, nonatomic) CAShapeLayer *outerFocusOutlineLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)focusLayerForUserInterfaceStyle:(long long)a0;
+ (id)parentLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)a0;
+ (id)clearLayer;

- (void)dealloc;
- (void)setPath:(struct CGPath { } *)a0;
- (void)updateAppearance;
- (void).cxx_destruct;
- (double)scaledOutlineWidth:(double)a0;
- (id)strokeColorForFocusOutline;
- (void)updateCachedSettings;
- (void)updateFocusOutlinePath;
- (id)viewTintColor;
- (void)watchControlSettingsDidChange:(id)a0;

@end
