@class NSArray, NSData, NSMutableArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray *_accessoryServers;
}

@property (readonly, copy) NSArray *accessoryServers;
@property (readonly, nonatomic) unsigned long long transportTypes;
@property (nonatomic) long long certificationStatus;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) long long linkType;

- (BOOL)isReachable;
- (id)serialNumber;
- (id)nodeID;
- (id)dumpDescription;
- (id)productID;
- (id)vendorID;
- (void).cxx_destruct;
- (id)commissioningID;
- (long long)associationOptions;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (id)rootPublicKey;
- (BOOL)supportsCHIP;
- (BOOL)isKnownToSystemCommissioner;
- (void)addAccessoryServer:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (BOOL)hasBTLELink;
- (BOOL)hasIPLink;
- (id)initWithAccessoryServer:(id)a0 messageDispatcher:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)preferredAccessoryServer;
- (void)removeAccessoryServer:(id)a0;

@end
