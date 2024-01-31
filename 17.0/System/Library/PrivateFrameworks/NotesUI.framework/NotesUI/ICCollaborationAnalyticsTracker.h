@class ICCollaborationAnalyticsTrackerInternal;

@interface ICCollaborationAnalyticsTracker : NSObject

@property (retain, nonatomic) ICCollaborationAnalyticsTrackerInternal *collaborationAnalyticsTracker;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)removeShareTrackingForNote:(id)a0;
- (void)saveActivityType:(id)a0 isCollaborationSelected:(BOOL)a1 error:(id)a2 completed:(BOOL)a3 forNote:(id)a4;
- (void)saveNewShare:(id)a0 forNote:(id)a1;
- (void)trackShare:(id)a0 forNote:(id)a1;

@end
