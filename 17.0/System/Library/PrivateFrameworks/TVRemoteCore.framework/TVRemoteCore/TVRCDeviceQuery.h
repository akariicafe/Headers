@class NSSet;
@protocol TVRCDeviceQueryDelegate;

@interface TVRCDeviceQuery : NSObject

@property (weak, nonatomic) id<TVRCDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;

+ (void)_allDiscoveredDevicesDidUpdate:(id)a0;
+ (id)_allDiscoveredDevices;
+ (void)_updateSuggestedDevices:(id)a0;
+ (id)deviceForDeviceState:(id)a0;
+ (void)fetchActiveEndpointUIDWithCompletion:(id /* block */)a0;
+ (void)getConnectionStatusToDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)fetchSuggestedDevicesWithResponse:(id /* block */)a0;

@end
