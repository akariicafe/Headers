@class UIButton, PXSharedLibraryStatusProvider, PXLibraryFilterState, UILabel, PXContentFilterState;
@protocol PXFilterFooterViewDelegate;

@interface PXFilterFooterView : UIView {
    UILabel *_captionLabel;
    UIButton *_filterButton;
}

@property (weak, nonatomic) id<PXFilterFooterViewDelegate> delegate;
@property (retain, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (retain, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (retain, nonatomic) PXContentFilterState *contentFilterState;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateDisplay;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_showFilterUI:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsCaption:(struct CGSize { double x0; double x1; })a0;

@end
