@class NSString, NSSet, NSOrderedSet;

@interface ManagedCatalogModalityReference : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *alternativeActivityTypes;
@property (nonatomic, retain) NSSet *features;
@property (nonatomic, retain) NSSet *filterPropertyTypes;
@property (nonatomic, retain) NSOrderedSet *healthKitActivityTypes;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
