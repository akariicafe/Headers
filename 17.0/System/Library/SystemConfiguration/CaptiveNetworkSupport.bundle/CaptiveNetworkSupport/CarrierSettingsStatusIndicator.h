@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface CarrierSettingsStatusIndicator : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property void /* function */ *callback;
@property struct __CFRunLoop { } *runloop;
@property struct __CFString { } *runloopMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createConnection;
- (id)init;
- (void)preferredDataSimChanged:(id)a0;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)a0;

@end
