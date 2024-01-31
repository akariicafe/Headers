@class NSString, NSSet;

@interface ManagedCatalogTipCategoryIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogTipReferenceCategories;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
