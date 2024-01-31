@interface RemindersUICore.TTRSharedWithYouProvider : NSObject <SWHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ highlightCenter;
    void /* unknown type, empty encoding */ invocationQueue;
    void /* unknown type, empty encoding */ backgroundQueue;
    void /* unknown type, empty encoding */ containerForAccountID;
    void /* unknown type, empty encoding */ customFetchShareForSharedList;
    void /* unknown type, empty encoding */ shareOperationManager;
}

- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
