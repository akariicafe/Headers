@class NSSet;

@interface ManagedHealthKitActivityType : NSManagedObject

@property (nonatomic) long long value;
@property (nonatomic, retain) NSSet *modalityReference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
