@interface MKFLocalBulletinServiceRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long serviceInstanceID;

+ (id)fetchRequest;
+ (id)fetchServiceRegistrationForAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 managedObjectContext:(id)a2;

@end
