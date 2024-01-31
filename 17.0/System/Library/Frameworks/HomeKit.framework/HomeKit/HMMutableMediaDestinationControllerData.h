@class NSUUID, NSArray;

@interface HMMutableMediaDestinationControllerData : HMMediaDestinationControllerData

@property (copy) NSUUID *destinationIdentifier;
@property unsigned long long supportedOptions;
@property (copy) NSArray *availableDestinationIdentifiers;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
