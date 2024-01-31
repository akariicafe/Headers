@class NSString, NSLayoutConstraint, UIView;
@protocol _UITAMICAdaptorViewDelegate;

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _inLayout;
}

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) float sizingPriority;
@property (weak, nonatomic) id<_UITAMICAdaptorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldWrapView:(id)a0;

- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)updateForAvailableSize;
- (void)_updateTraitsAndLayoutSizeIfNecessary;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
