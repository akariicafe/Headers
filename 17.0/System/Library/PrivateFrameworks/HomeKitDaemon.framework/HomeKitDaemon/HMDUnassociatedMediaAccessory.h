@class NSString, HMDAccessoryAdvertisement;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging>

@property (retain) HMDAccessoryAdvertisement *advertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)transportTypes;
- (long long)associationOptions;
- (id)addTransactionForHome:(id)a0 configurationAppIdentifier:(id)a1;
- (id)initWithAdvertisement:(id)a0 messageDispatcher:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (BOOL)isHAPAirPlay2Accessory;
- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
- (void)updateAdvertisementData:(id)a0;

@end
