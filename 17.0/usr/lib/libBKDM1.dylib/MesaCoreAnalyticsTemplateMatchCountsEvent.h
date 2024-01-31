@class NSNumber;

@interface MesaCoreAnalyticsTemplateMatchCountsEvent : MesaCoreAnalyticsEvent

@property (retain) NSNumber *enrolledUsersCount;
@property (retain) NSNumber *activeUsersCount;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
