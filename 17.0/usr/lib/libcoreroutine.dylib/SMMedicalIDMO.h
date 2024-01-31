@class NSUUID, NSString, NSSet;

@interface SMMedicalIDMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) short age;
@property (copy, nonatomic) NSString *allergiesAndRestrictions;
@property (copy, nonatomic) NSString *bloodType;
@property (nonatomic) short height;
@property (copy, nonatomic) NSString *medicalConditions;
@property (copy, nonatomic) NSString *medicalNotes;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) short weight;
@property (retain, nonatomic) NSSet *emergencyContacts;

+ (id)fetchRequest;
+ (id)managedObjectWithMedicalID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithMedicalID:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
