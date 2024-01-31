@interface RemindersUICore.TTRIHashtagWrappingCollectionView : UIView <NUIContainerViewDelegate, UIDropInteractionDelegate, UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ allTagsButtonState;
    void /* unknown type, empty encoding */ addTagButtonState;
    void /* unknown type, empty encoding */ hashtagLabels;
    void /* unknown type, empty encoding */ allowsEmptySelection;
    void /* unknown type, empty encoding */ allowsExcludedSelection;
    void /* unknown type, empty encoding */ focusStyle;
    void /* unknown type, empty encoding */ wrappingContainer;
    void /* unknown type, empty encoding */ populator;
    void /* unknown type, empty encoding */ internalSelection;
    void /* unknown type, empty encoding */ lastLayoutResult;
    void /* unknown type, empty encoding */ dropState;
    void /* unknown type, empty encoding */ targetHashtagLabelForPerformingDrop;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ focusGuide;
}

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)addTagButtonAction:(id)a0;
- (void)hashtagButtonAction:(id)a0;

@end
