@interface ICActivityStreamDockView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBorderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundEffectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showAllActivityButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_horizontalStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baselineLayoutGuide;
    void /* unknown type, empty encoding */ colorBarHidden;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ coordinator;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDisplayedInCard;
@property (nonatomic, retain) void /* unknown type, empty encoding */ horizontalStackLeadingConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ selection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ object;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ margin;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ buttonHeight;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ closeButtonHeight;
@property (nonatomic, readonly) double closeButtonImageHeight;

- (void)update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinator:(id)a0 isDisplayedInCard:(BOOL)a1;

@end
