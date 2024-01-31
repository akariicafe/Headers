@class CAMSlashView, NSString, UIView, CAMSlashMaskView;

@interface CAMSlashContainer : UIView <CAMViewOrientable>

@property (retain, nonatomic, setter=_setSlashView:) CAMSlashView *_slashView;
@property (retain, nonatomic, setter=_setSlashMaskView:) CAMSlashMaskView *_slashMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isSlashed) BOOL slashed;
@property (nonatomic) struct CGSize { double width; double height; } slashSize;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateOrientationAnimated:(BOOL)a0;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)setSlashed:(BOOL)a0 animated:(BOOL)a1;

@end
