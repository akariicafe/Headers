@interface DocumentManagerExecutables.DOCCollaborationHighlightManager : NSObject <SWHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ highlightCenter;
    void /* unknown type, empty encoding */ collaborationIdentifierToHighlightCache;
    void /* unknown type, empty encoding */ fetchQueue;
    void /* unknown type, empty encoding */ coalescingTimer;
    void /* unknown type, empty encoding */ pendingIdentifiersToNotify;
}

- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
