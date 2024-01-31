@class NSArray, HMMediaDestination, HMMediaDestinationControllerData;

@interface HMDMutableMediaGroupsParticipantData : HMDMediaGroupsParticipantData

@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;
@property (copy) NSArray *backedUpGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
