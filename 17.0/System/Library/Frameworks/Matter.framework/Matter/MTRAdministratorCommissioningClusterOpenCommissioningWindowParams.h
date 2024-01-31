@class NSData, NSNumber;

@interface MTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *pakeVerifier;
@property (copy, nonatomic) NSNumber *commissioningTimeout;
@property (copy, nonatomic) NSData *pakePasscodeVerifier;
@property (copy, nonatomic) NSNumber *discriminator;
@property (copy, nonatomic) NSNumber *iterations;
@property (copy, nonatomic) NSData *salt;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
