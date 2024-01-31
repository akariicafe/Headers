@class HDHAHealthAppPluginHostConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject

@property (retain, nonatomic) HDHAHealthAppPluginHostConnection *connection;

- (id)init;
- (void)runBackgroundGenerationForAllPlugins;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)a0 commitUrgentTransaction:(BOOL)a1 feedItemsOnly:(BOOL)a2;
- (id)synchronousHealthAppPluginHost;
- (void).cxx_destruct;
- (id)healthAppPluginHost;
- (void)invalidateStoreCache;
- (void)handleJournaledSharingEntries:(id)a0;

@end
