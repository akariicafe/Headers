@class NSString, PXUIAssetBadgeView;

@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate> {
    PXUIAssetBadgeView *_toggleGlyphButton;
    id _target;
    SEL _action;
}

@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)assetBadgeView:(id)a0 userDidSelectBadges:(unsigned long long)a1;

@end
