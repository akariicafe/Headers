@class VUIndexObservation;

@interface VUIndexMapping : NSManagedObject

@property (nonatomic) float density;
@property (nonatomic) long long label;
@property (nonatomic) int partition;
@property (nonatomic) long long partner;
@property (nonatomic) float similarity;
@property (nonatomic, retain) VUIndexObservation *observation;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
