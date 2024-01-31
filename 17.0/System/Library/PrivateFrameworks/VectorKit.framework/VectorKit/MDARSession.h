@interface MDARSession : NSObject

@property (class, readonly) BOOL isSupported;

+ (id)newGeoTrackingSession;
+ (id)newPositionalTrackingSession;
+ (id)stringWithARGeoTrackingAccuracy:(long long)a0;
+ (id)stringWithARGeoTrackingState:(long long)a0;
+ (id)stringWithARGeoTrackingStateReason:(long long)a0;
+ (id)stringWithARTrackingState:(long long)a0;
+ (id)stringWithARTrackingStateReason:(long long)a0;

@end
