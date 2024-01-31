@class PXCMMInvitationSpec, NSString, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, UIView, UILabel, PXCMMInvitationViewModel;
@protocol PXCMMInvitationViewDelegate;

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver> {
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
}

@property (class, readonly) PXCMMInvitationSpec *spec;

@property (retain, nonatomic) PXCMMInvitationViewModel *viewModel;
@property (weak, nonatomic) id<PXCMMInvitationViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })posterHeaderViewSizeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })posterImageSizeThatFits:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_updateSubtitle1;
- (BOOL)_updateSubtitle2;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_updateTitle;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateHeaderView;
- (void)_updateOpaqueAncestorBackgroundColor;
- (id)test_subtitle1;
- (id)test_subtitle2;
- (id)test_title;

@end
