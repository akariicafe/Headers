@class NSArray, NSUUID, NSString;

@interface HMMutableMediaGroup : HMMediaGroup

@property (copy) NSArray *destinationUniqueIdentifiers;
@property (copy) NSUUID *identifier;
@property (copy) NSString *name;
@property (getter=isDefaultName) BOOL defaultName;
@property (copy) NSUUID *associatedGroupIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDestinationUniqueIdentifiers:(id)a0;

@end
