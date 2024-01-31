@class NSString;

@interface HMDResidentDeviceManagerXPCDiscoveryRequester : NSObject <HMDResidentDeviceManagerDiscoveryRequester>

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)residentDeviceManager:(id)a0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)a1 error:(id)a2;

@end
