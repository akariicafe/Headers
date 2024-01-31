@class NSString, NSOrderedSet;

@interface ManagedCatalogTipReference : NSManagedObject

@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSOrderedSet *categoryIdentifiers;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
