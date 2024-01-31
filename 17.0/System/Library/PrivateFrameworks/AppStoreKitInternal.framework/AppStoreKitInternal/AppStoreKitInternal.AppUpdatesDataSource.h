@interface AppStoreKitInternal.AppUpdatesDataSource : NSObject <ASDAppQueryResultsObserver> {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ updatesQuery;
    void /* unknown type, empty encoding */ lastServerReloadTime;
    void /* unknown type, empty encoding */ listeners;
}

- (id)init;
- (void).cxx_destruct;
- (void)appQuery:(id)a0 resultsDidChange:(id)a1;

@end
