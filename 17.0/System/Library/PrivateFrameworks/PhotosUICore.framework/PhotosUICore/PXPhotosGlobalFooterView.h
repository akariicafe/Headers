@class UIView, NSString, PXFooterAnimatedIconView, PXFooterViewModel, PXGradientView, UITextView, UILabel, UIProgressView;
@protocol PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;

@interface PXPhotosGlobalFooterView : UICollectionReusableView <UITextViewDelegate, PXChangeObserver> {
    UIView *_accessoryView;
    UIView *_topAccessoryView;
    UIView *_filterView;
    BOOL _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    PXGradientView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_extendedTitleLabel;
    UILabel *_internalMessageSubtitleLabel;
    UITextView *_subtitle1TextView;
    UITextView *_subtitle2TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    BOOL _isPresentingAlert;
    struct { BOOL photosGlobalFooterViewDidChangeHeight; BOOL photosGlobalFooterViewDidMoveToWindow; } _delegateRespondsTo;
    BOOL _isPerformingChanges;
}

@property (readonly, nonatomic) BOOL needsWorkaroundFor53118165;
@property (retain, nonatomic) PXFooterViewModel *viewModel;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewDelegate> delegate;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate;
@property (readonly, nonatomic) double currentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_updateAccessory;
- (void)_updateProgressAnimated:(BOOL)a0;
- (void)_updateTopAccessory;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configurePhotoCollectionGlobalFooterInternalMessageSubtitleLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubtitle1;
- (void)setHidden:(BOOL)a0;
- (void)_updateSubtitle2;
- (void)_configurePhotoCollectionGlobalFooterLabel:(id)a0 withFont:(id)a1 textColor:(id)a2;
- (void)_updateExtendedTitle;
- (void)_updateInternalMessageSubtitle;
- (BOOL)_shouldUseActionLinkInSubtitle2;
- (void)_animatedIconCrossedGridCycleBoundary;
- (void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)_performActionFromView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configurePhotoCollectionGlobalFooterExtendedTitleLabel:(id)a0;
- (void).cxx_destruct;
- (void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)a0;
- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needsWorkaroundFor53118165:(BOOL)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (void)_updateAnimatedIcon;
- (void)_updateFilterView;
- (void)didMoveToWindow;
- (BOOL)_shouldUseActionLinkInSubtitle1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
