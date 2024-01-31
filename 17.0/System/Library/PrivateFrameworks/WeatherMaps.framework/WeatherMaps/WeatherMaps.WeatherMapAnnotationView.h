@class UIColor, NSString, UIBezierPath, UIImage, UIView;

@interface WeatherMaps.WeatherMapAnnotationView : MKAnnotationView <_MKBalloonCalloutViewConfiguring> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ shouldDisableImplicitAnimations;
    void /* unknown type, empty encoding */ axBalloonContentView;
    void /* unknown type, empty encoding */ mapAnnotation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinView;
}

@property (nonatomic, readonly) UIImage *balloonImage;
@property (nonatomic, readonly) long long balloonCalloutStyle;
@property (nonatomic, readonly) UIView *balloonContentView;
@property (nonatomic, readonly) UIColor *balloonTintColor;
@property (nonatomic, readonly) UIColor *balloonStrokeColor;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
