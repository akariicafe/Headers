@class NSString, UIImageView, NSArray;

@interface MKCompassView : UIView <MKCompassView> {
    UIImageView *_containerImageView;
    UIImageView *_assetImageView;
    NSArray *_compassPointLocalizedAbbreviations;
    int _lastDrawnCompassDirection;
}

@property (nonatomic) double mapHeading;
@property (readonly, nonatomic) long long compassViewSize;
@property (readonly, nonatomic) long long compassViewStyle;
@property (nonatomic) double yaw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_parameterForStyle:(long long)a0;
+ (id)_parameterForSize:(long long)a0;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateStyle;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)movedToWindow:(id)a0;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)_adaptCompassStyleToUserInterfaceStyle;
- (id)_compassDirectionImageForKey:(id)a0 sizeParams:(id)a1 styleParams:(id)a2 scale:(double)a3;
- (void)_populateCompassPointLocalizedAbbreviationsArray;
- (void)_setupImageView:(id)a0;
- (void)_updateImageForCompassDirection:(int)a0;
- (void)_updateLayerForCurrentSizeAndStyle;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint { double x0; double x1; })a0;
- (void)setCompassViewSize:(long long)a0;
- (void)setCompassViewSize:(long long)a0 style:(long long)a1;
- (id)stringForCompassPoint:(int)a0;
- (void)updateLocale:(id)a0;

@end
