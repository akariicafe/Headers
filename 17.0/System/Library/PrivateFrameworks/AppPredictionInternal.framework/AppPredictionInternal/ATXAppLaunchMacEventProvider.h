@class NSString, NSSet;

@interface ATXAppLaunchMacEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSSet *_iOSInstalledApps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)remoteDevicesForDevicePlatform:(long long)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0 devicePlatform:(long long)a1 startTime:(double)a2;
- (id)dateIntervalFromEvent:(id)a0;
- (id)eventsFromPublisher;
- (id)iOSBundleIDForMacOSBundleID:(id)a0;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;

@end
