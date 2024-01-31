@class NSString, NSSet;

@interface ManagedCatalogFilterPropertyType : NSManagedObject

@property (nonatomic, copy) NSString *propertyType;
@property (nonatomic, retain) NSSet *catalogModalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
