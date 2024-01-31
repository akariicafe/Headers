@class UIStackView, NSString, SFQuickLookDocumentInfoView, NSArray, UIView, NSLayoutConstraint;
@protocol SFQuickLookDocumentViewDelegate;

@interface SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {
    UIView *_wrapperView;
    UIView *_contentView;
    SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
}

@property (weak, nonatomic) id<SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)a0;
- (void)_configureOrientationBasedConstraints:(long long)a0;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForButtonAtIndex:(unsigned long long)a0;
- (void)updateActionTitles:(id)a0;
- (void)updateDocumentFileName:(id)a0;
- (void)updateDocumentFileSize:(id)a0;
- (void)updateDocumentFileType:(id)a0;
- (void)updateDocumentIcon:(id)a0;

@end
