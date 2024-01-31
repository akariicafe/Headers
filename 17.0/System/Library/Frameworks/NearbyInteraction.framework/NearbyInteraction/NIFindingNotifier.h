@class NISession;

@interface NIFindingNotifier : NSObject {
    NISession *parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)a0;
- (void)notifyDiscoveredNearbyObjectWithToken:(id)a0 sharedConfigurationData:(id)a1;
- (void)notifyRemovedNearbyObjectWithToken:(id)a0;
- (void)notifyUpdatedHeadingForLocalDevice:(id)a0;
- (void)notifyUpdatedLocation:(id)a0 forNearbyObjectWithToken:(id)a1;
- (void)notifyUpdatedLocationForLocalDevice:(id)a0;

@end
