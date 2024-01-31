@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;

+ (id)sharedInstance;

- (void)begin;
- (id)init;
- (void)end;
- (void)overrideSignalStrengthLimit:(long long)a0;

@end
