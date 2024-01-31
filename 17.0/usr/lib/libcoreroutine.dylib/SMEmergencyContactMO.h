@class NSUUID, NSString, SMMedicalIDMO;

@interface SMEmergencyContactMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) SMMedicalIDMO *medicalID;

+ (id)fetchRequest;
+ (id)managedObjectWithEmergencyContact:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithEmergencyContact:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
