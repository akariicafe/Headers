@class NSArray, ATXModeEntityStore, NSDate;

@interface ATXModeScoringSessionRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) ATXModeEntityStore *modeEntityStore;

- (void).cxx_destruct;
- (BOOL)_areTimesClose:(id)a0 secondTime:(id)a1;
- (BOOL)_shouldCoaleseNextSession:(id)a0 currentBuffer:(id)a1;
- (void)attachAppLaunches;
- (void)coalesceSessions;
- (void)filterSessions;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 modeEntityStore:(id)a2;
- (void)populateInitialSessionsFromScreenTransitions;

@end
