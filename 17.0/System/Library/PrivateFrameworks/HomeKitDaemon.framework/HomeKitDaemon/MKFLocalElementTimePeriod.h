@class MKFLocalBulletinConditionTimePeriod;

@interface MKFLocalElementTimePeriod : HMDManagedObject

@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *endCondition;
@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *startCondition;

+ (id)fetchRequest;

@end
