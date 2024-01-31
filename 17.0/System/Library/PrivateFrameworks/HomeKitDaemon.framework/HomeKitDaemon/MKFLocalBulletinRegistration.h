@class NSSet;

@interface MKFLocalBulletinRegistration : HMDManagedObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSSet *conditions;

+ (id)fetchRequest;

@end
