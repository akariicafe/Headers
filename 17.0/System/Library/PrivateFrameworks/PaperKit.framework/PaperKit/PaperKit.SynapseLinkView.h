@interface PaperKit.SynapseLinkView : PaperKit.LinkView <LPLinkViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkPresentationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analytics;
    void /* unknown type, empty encoding */ synapseLink;
    void /* unknown type, empty encoding */ canvas;
    void /* unknown type, empty encoding */ viewModelSize;
    void /* unknown type, empty encoding */ viewScaleTransform;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hasUserActivityWithLinkContextInfo;
}

- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)_contextMenuActionsForLinkView:(id)a0;
- (BOOL)_wantsContextMenuPreviewForLinkView:(id)a0;
- (void)linkViewNeedsResize:(id)a0;

@end
