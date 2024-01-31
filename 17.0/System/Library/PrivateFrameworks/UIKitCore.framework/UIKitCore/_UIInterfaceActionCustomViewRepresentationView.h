@class UIView;

@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView {
    UIView *_actionContentView;
}

- (id)initWithAction:(id)a0;
- (long long)_focusItemDeferralMode;
- (void)setHighlighted:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_actionContentView;
- (id)_fittingContentSizingView;
- (void)_insertLoadedContentsIntoHierarchy;
- (void)_removeLoadedContentsFromViewHierarcy;
- (BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)a0;
- (void)updateContentsInsertedIntoHierarchy;

@end
