@class NSString, ManagedCatalogThemeCategory;

@interface ManagedCatalogTheme : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) ManagedCatalogThemeCategory *category;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
