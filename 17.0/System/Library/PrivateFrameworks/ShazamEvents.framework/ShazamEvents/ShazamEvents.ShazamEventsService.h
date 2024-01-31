@protocol SHServiceDelegate;

@interface ShazamEvents.ShazamEventsService : NSObject <SHService, ShazamEvents.ShazamEventsServer> {
    void /* unknown type, empty encoding */ liveMusicEventFetcher;
    void /* unknown type, empty encoding */ underlyingServiceDelegate;
}

@property (nonatomic, retain) id<SHServiceDelegate> serviceDelegate;

+ (id)machServiceName;
+ (void)initializeGlobalServiceState;

- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (void)liveMusicEventWithEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)liveMusicScheduleWithArtistID:(id)a0 completionHandler:(id /* block */)a1;
- (void)liveMusicScheduleWithVenueID:(id)a0 completionHandler:(id /* block */)a1;

@end
