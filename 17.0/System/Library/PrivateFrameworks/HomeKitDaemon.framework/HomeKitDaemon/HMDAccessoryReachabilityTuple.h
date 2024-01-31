@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID;
@property (nonatomic) BOOL previouslySentReachability;
@property (nonatomic) BOOL currentReachability;
@property (nonatomic) unsigned long long previouslySentSuspendedState;
@property (nonatomic) unsigned long long currentSuspendedState;

+ (id)tupleWithAccessoryUUID:(id)a0 reachable:(BOOL)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
