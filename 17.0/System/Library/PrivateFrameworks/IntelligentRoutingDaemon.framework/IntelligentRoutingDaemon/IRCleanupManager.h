@class IRBackgroundActivitiesManager;

@interface IRCleanupManager : NSObject

@property (weak, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

- (void).cxx_destruct;
- (id)_getDateIntervalOfBuildsToDiscard;
- (id)_getListOfBuildsToDiscard;
- (void)_handleCleanupXPCActivity;
- (id)initWithBackgroundActivitiesManager:(id)a0;

@end
