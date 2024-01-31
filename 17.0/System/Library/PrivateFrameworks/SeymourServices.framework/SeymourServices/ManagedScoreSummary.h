@class ManagedArchivedSession;

@interface ManagedScoreSummary : NSManagedObject

@property (nonatomic) float communityLowerMiddleScore;
@property (nonatomic) float communityLowerScore;
@property (nonatomic) float communityUpperMiddleScore;
@property (nonatomic) float communityUpperScore;
@property (nonatomic) int elapsedSeconds;
@property (nonatomic) float personalScore;
@property (nonatomic, retain) ManagedArchivedSession *archivedSession;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
