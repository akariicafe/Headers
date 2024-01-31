@class TSXgPTPNetworkPort, NSString;

@interface TSXgPTPNetworkPortExported : NSObject <TSXgPTPNetworkPortClientProtocol>

@property (weak, nonatomic) TSXgPTPNetworkPort *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)announceTimeout;
- (void)changedASCapable:(BOOL)a0;
- (void)changedAdministrativeEnable:(BOOL)a0;
- (void)syncTimeoutWithMean:(long long)a0 median:(long long)a1 standardDeviation:(unsigned long long)a2 minimum:(long long)a3 maximum:(long long)a4 numberOfSamples:(unsigned int)a5;
- (void)terminatedService;
- (void)timedoutMACLookup;
- (void)updatedPortProperties:(id)a0;

@end
