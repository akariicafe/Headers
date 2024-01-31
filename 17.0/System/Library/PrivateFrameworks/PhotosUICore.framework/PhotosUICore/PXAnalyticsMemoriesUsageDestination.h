@class NSString;
@protocol PXDisplayAssetCollection;

@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    long long _defaultNavigationKind;
    long long _currentURLNavigationKind;
    long long _sessionInitialNavigationKind;
    id<PXDisplayAssetCollection> _lastAppearedAssetCollection;
    long long _lastAppearedAssetCollectionNavigationKind;
}

@property (class, readonly, nonatomic) NSString *forYouTabOpenedEventName;
@property (class, readonly, nonatomic) NSString *payloadLaunchTypeKey;
@property (class, readonly, nonatomic) NSString *payloadSessionStartTypeKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;

@end
