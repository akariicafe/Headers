@class NSString, NSDictionary;

@interface WFUserJoinEvent : NSObject <WFUIEvent>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)joinEventWithSecurity:(long long)a0 error:(long long)a1 sectionCounts:(id)a2 sectionName:(id)a3 didRun:(BOOL)a4 didPass:(BOOL)a5 failedTests:(id)a6;
+ (id)joinEventWithType:(long long)a0 security:(long long)a1 error:(long long)a2 didRun:(BOOL)a3 didPass:(BOOL)a4 failedTests:(id)a5;

@end
