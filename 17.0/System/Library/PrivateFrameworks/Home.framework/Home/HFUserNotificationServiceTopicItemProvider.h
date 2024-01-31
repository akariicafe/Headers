@class NSSet, HMHome;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *topicItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
