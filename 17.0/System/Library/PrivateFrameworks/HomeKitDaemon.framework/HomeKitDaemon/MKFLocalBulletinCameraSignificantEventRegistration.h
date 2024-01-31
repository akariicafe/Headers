@interface MKFLocalBulletinCameraSignificantEventRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long notificationModes;
@property (nonatomic) long long personFamiliarityOptions;
@property (nonatomic) long long significantEventTypes;

+ (id)fetchRequest;
+ (id)fetchCameraSignificantEventRegistrationForAccessoryUUID:(id)a0 managedObjectContext:(id)a1;

@end
