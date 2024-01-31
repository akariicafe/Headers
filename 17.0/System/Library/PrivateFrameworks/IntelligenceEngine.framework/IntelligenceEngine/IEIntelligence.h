@class NSString;

@interface IEIntelligence : NSObject

@property (nonatomic) void *mIntelligence;
@property (retain, nonatomic) NSString *mFlowId;

- (BOOL)load:(id)a0;
- (id)init;
- (void)dealloc;
- (id)getBuildVersion;
- (void)setExtensions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)flowId;
- (id)processEvent:(id)a0;
- (id)processText:(id)a0;
- (id)getFormatVersion;
- (id)activeEvents;
- (id)getUndo;
- (id)find:(id)a0 withId:(id)a1;
- (id)findInTemplateDir:(id)a0 withId:(id)a1;
- (id)getChangedPersistentVariables;
- (id)getEvents;
- (id)getExitValue;
- (id)getInputGroup:(id)a0;
- (id)getRemainingResponses;
- (id)getVariables;
- (BOOL)hasActiveFallback;
- (BOOL)load:(id)a0 withFlowId:(id)a1;
- (BOOL)load:(id)a0 withId:(id)a1;
- (BOOL)setVariable:(id)a0 withValue:(id)a1;
- (id)startConversation;
- (BOOL)loadFromString:(id)a0;
- (id)activeLocalEvents;
- (id)getActiveEventsWithScope:(int)a0;
- (id)getConditions;
- (id)goTo:(id)a0;
- (id)processActivity:(id)a0;
- (id)processDirectInvocation:(id)a0;
- (id)processText:(id)a0 withMode:(unsigned long long)a1 withFallback:(unsigned long long)a2;
- (BOOL)willHandleDirectInvocation:(id)a0;
- (BOOL)willHandleEvent:(id)a0;

@end
