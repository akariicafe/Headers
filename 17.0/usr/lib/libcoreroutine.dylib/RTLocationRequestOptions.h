@interface RTLocationRequestOptions : NSObject

@property (readonly, nonatomic) BOOL fallback;
@property (readonly, nonatomic) BOOL yieldLastLocation;
@property (readonly, nonatomic) double desiredAccuracy;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double maxAge;
@property (readonly, nonatomic) double fallbackHorizontalAccuracy;
@property (readonly, nonatomic) double fallbackMaxAge;
@property (readonly, nonatomic) double timeout;

- (id)description;
- (id)initWithDesiredAccuracy:(double)a0 horizontalAccuracy:(double)a1 maxAge:(double)a2 yieldLastLocation:(BOOL)a3 timeout:(double)a4 fallback:(BOOL)a5 fallbackHorizontalAccuracy:(double)a6 fallbackMaxAge:(double)a7;

@end
