@class NSString, GKPlayer, NSData;

@interface GKNearbyDevice : NSObject

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long state;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic) BOOL usePeerDiscovery;

+ (id)nearbyDeviceWithID:(id)a0;

- (void).cxx_destruct;
- (void)sendDictionary:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
