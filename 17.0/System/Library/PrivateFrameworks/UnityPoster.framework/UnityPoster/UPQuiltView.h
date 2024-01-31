@class UIColor, NSString, CAShapeLayer, CALayer, UPQuiltConfiguration;
@protocol UPQuiltViewDelegate;

@interface UPQuiltView : UIView {
    CALayer *_transitionLayer;
    double _widthRatioToHero;
    double _heightRatioToHero;
    struct CGPath { } *_topQuiltPieceTargetPathRef;
    struct CGPath { } *_bottomLeftQuiltPieceTargetPathRef;
    CAShapeLayer *_intersectionPieceLayer;
    struct CGPath { } *_intersectionPieceTargetPathRef;
    struct CGPath { } *_thirdPieceTargetPathRef;
}

@property (weak, nonatomic) id<UPQuiltViewDelegate> quiltViewDelegate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *topQuiltColor;
@property (retain, nonatomic) UIColor *bottomLeftQuiltColor;
@property (retain, nonatomic) UIColor *intersectionPieceColor;
@property (retain, nonatomic) UIColor *bottomRightQuiltColor;
@property (retain, nonatomic) CALayer *quiltImageLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } landscapeWidgetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (retain, nonatomic) CAShapeLayer *topQuiltPieceLayer;
@property (retain, nonatomic) CAShapeLayer *bottomLeftQuiltPieceLayer;
@property (retain, nonatomic) CAShapeLayer *bottomRightQuiltPieceLayer;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) struct CGPath { } *topQuiltPathRef;
@property (readonly, nonatomic) struct CGPath { } *bottomLeftQuiltPathRef;
@property (retain, nonatomic) UPQuiltConfiguration *configuration;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1;
- (void)setColors;
- (void)updateQuiltsWithIdentifier:(id)a0 deviceInterfaceOrientation:(long long)a1 unlockProgress:(double)a2;
- (void)updateQuiltsWithUnlockProgress:(double)a0 wakeProgress:(double)a1;

@end
