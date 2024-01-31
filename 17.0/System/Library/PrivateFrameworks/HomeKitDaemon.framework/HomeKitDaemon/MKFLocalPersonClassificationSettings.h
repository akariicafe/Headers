@class NSUUID, NSSet;

@interface MKFLocalPersonClassificationSettings : HMDManagedObject

@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSSet *classificationRegistrations;

+ (id)fetchRequest;
+ (id)fetchPersonClassificationSettingsForModelID:(id)a0 managedObjectContext:(id)a1;

@end
