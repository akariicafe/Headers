@class NSString, PXMessagesStackPlaybackControlUserData, PXMessagesStackPlaybackControlViewModel, PXGDisplayAssetVideoPresentationController, _PXMessagesStackPlayButton;

@interface PXMessagesStackPlaybackControlView : UIView <PXChangeObserver, PXGReusableView> {
    _PXMessagesStackPlayButton *_button;
    long long _itemIndex;
}

@property (retain, nonatomic) PXMessagesStackPlaybackControlViewModel *viewModel;
@property (retain, nonatomic) PXGDisplayAssetVideoPresentationController *videoController;
@property (copy, nonatomic) PXMessagesStackPlaybackControlUserData *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleButton:(id)a0;
- (BOOL)_shouldPauseOnTap;
- (void)_updateButtonVisibility;
- (BOOL)_wantsButton;
- (BOOL)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
