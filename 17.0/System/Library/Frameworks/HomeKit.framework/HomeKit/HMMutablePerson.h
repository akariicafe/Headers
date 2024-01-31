@class NSString, NSSet, NSUUID;

@interface HMMutablePerson : HMPerson

@property (copy) NSString *name;
@property (copy) NSSet *personLinks;
@property (copy) NSUUID *externalPersonUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
