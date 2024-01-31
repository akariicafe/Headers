@class NSString, _UIBackdropView, UIView;

@interface SUUIScrollingTabBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
}

@property (copy, nonatomic) NSString *backdropBarGroupName;
@property (nonatomic) BOOL showsBackdrop;
@property (nonatomic) BOOL showsBottomHairline;
@property (nonatomic) BOOL showsTopHairline;
@property (nonatomic) BOOL usesOpaqueColorForTopHairline;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTopHairlineColor;

@end
