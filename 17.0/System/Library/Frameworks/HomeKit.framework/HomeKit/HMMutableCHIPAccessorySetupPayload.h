@class NSString, NSNumber;

@interface HMMutableCHIPAccessorySetupPayload : HMCHIPAccessorySetupPayload

@property (nonatomic) BOOL hasShortDiscriminator;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL requiresCustomFlow;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
