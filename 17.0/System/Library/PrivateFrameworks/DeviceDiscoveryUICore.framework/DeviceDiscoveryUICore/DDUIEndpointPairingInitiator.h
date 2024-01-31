@class NSArray;
@protocol DDUIEndpointPairingBrowsingTransport;

@interface DDUIEndpointPairingInitiator : NSObject

@property (nonatomic) unsigned int acceptedDeviceTypes;
@property (retain, nonatomic) id<DDUIEndpointPairingBrowsingTransport> transport;
@property (copy, nonatomic) id /* block */ availableDevicesChangedHandler;
@property (readonly, nonatomic) NSArray *availableDevices;

- (void)invalidate;
- (void).cxx_destruct;
- (void)beginWithCompletion:(id /* block */)a0;
- (id)initForDeviceTypes:(unsigned int)a0 withTransport:(id)a1;
- (id)pairingSessionForDevice:(id)a0 bundleID:(id)a1 serviceIdentifier:(id)a2 error:(id *)a3;

@end
