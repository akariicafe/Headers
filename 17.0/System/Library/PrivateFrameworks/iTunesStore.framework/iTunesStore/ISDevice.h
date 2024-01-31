@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton> {
    long long _biometricStyle;
    unsigned long long _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

@property (readonly) NSString *deviceName;
@property (readonly) NSString *guid;
@property (readonly) NSString *hardwareName;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *systemName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;

- (id)init;
- (void)dealloc;
- (long long)deviceBiometricStyle;
- (int)_deviceClass;
- (BOOL)releasePowerAssertion:(id)a0;
- (id)supportedOfferDeviceForDevices:(id)a0;
- (BOOL)checkCapabilities:(id)a0 withMismatches:(id *)a1;
- (id)copyProtocolConditionalContext;
- (void)requestFreeSpace:(unsigned long long)a0 atPath:(id)a1 withOptions:(id)a2 completionBlock:(id /* block */)a3;
- (void)resetLocationAndPrivacy;
- (BOOL)takePowerAssertion:(id)a0;

@end
