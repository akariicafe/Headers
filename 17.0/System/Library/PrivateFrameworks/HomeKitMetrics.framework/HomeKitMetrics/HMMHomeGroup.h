@class NSUUID;

@interface HMMHomeGroup : HMMNamedGroup

@property (copy, nonatomic) NSUUID *homeUUID;

+ (id)fetchRequest;

@end
