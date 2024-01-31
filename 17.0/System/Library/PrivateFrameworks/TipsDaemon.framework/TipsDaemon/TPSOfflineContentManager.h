@class NSString, NSDictionary, NSBundle, NSObject;
@protocol OS_dispatch_queue, TPSOfflineContentManagerDelegate;

@interface TPSOfflineContentManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSString *lastProcessedLocalIdentifier;
@property (retain, nonatomic) NSDictionary *offlineContentMap;
@property (weak, nonatomic) id<TPSOfflineContentManagerDelegate> delegate;
@property (retain, nonatomic) NSBundle *frameworkBundle;

- (id)init;
- (void)removeOfflineContentForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updateOfflineContent;
- (id)_localFormattedDataForURL:(id)a0;
- (void)cacheEligibleContentWithMetadata:(id)a0 tipStatusController:(id)a1 miniTipsMap:(id)a2 tipsDeliveryInfoMap:(id)a3 deliveryInfoMap:(id)a4;
- (id)contentForIdentifier:(id)a0;
- (void)removeCacheContent;
- (BOOL)shouldProcessRemoteContentWithIdentifier:(id)a0;
- (void)updateOfflineContentMap:(id)a0;

@end
