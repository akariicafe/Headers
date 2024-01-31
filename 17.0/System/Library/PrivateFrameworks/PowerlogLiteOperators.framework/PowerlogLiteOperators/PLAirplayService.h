@class NSArray, NSString, PLEntryNotificationOperatorComposition, NSSet;

@interface PLAirplayService : PLService

@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback;
@property (retain) PLEntryNotificationOperatorComposition *audioAppCallback;
@property (retain) NSArray *screenLayoutEntries;
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState;
@property BOOL airplayMirroringOn;
@property (retain) NSSet *excludedAccountingEvents;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (void)load;

- (id)init;
- (void)handleScreenStateCallback:(id)a0;
- (void)initOperatorDependancies;
- (void)testService;
- (void).cxx_destruct;
- (void)handleAudioAppCallback:(id)a0;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;

@end
