@class NSString, NSSet;

@interface PlusMediaReferenceSourceAppCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *appMediaReferences;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
