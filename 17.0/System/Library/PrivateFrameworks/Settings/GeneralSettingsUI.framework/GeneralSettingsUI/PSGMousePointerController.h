@class NSString, NSMutableSet;
@protocol BSInvalidatable;

@interface PSGMousePointerController : NSObject <BKSMousePointerDeviceObserver>

@property (retain) id<BSInvalidatable> observerToken;
@property (retain, nonatomic) NSMutableSet *pointerDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (int)trackingSpeedIndex;
- (BOOL)hasMagicMouse;
- (void)setGlobalDevicePreferences:(id)a0;
- (void)mousePointerDevicesDidConnect:(id)a0;
- (BOOL)hasMouse;
- (void).cxx_destruct;
- (BOOL)hasTrackpad;
- (void)setTrackingSpeedIndex:(int)a0;
- (void)mousePointerDevicesDidDisconnect:(id)a0;
- (id)globalDevicePreferences;

@end
