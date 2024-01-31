@class NSString, NSSet;

@interface ManagedCatalogWorkoutTrait : NSManagedObject

@property (nonatomic, copy) NSString *trait;
@property (nonatomic, retain) NSSet *catalogWorkoutReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
