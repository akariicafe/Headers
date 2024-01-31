@class NSData, NSString;

@interface ManagedSessionScores : NSManagedObject

@property (nonatomic) long long activityType;
@property (nonatomic, copy) NSData *scores;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) int workoutDuration;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
