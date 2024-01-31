@class NSObject, WBSCloudTabStore;
@protocol OS_dispatch_queue;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {
    WBSCloudTabStore *_tabsStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (id)initWithTabStore:(id)a0;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
