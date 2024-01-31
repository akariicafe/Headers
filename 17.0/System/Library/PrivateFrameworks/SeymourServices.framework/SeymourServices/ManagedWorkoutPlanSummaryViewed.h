@class NSUUID, NSDate;

@interface ManagedWorkoutPlanSummaryViewed : NSManagedObject

@property (nonatomic, copy) NSDate *dateViewed;
@property (nonatomic, copy) NSUUID *planIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
