@class NSString, HFSelectedUserCollection;

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder>

@property (retain, nonatomic) HFSelectedUserCollection *users;
@property (nonatomic) unsigned long long locationEventType;
@property (nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic) unsigned long long presenceEventType;
@property (readonly, nonatomic) unsigned long long presenceUserType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_selectedUsersForPresenceEvent:(id)a0;

- (id)initWithEvent:(id)a0;
- (id)eventType;
- (void).cxx_destruct;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)a0;
- (id)comparisonKey;

@end
