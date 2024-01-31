@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (void)load;
+ (id)entryEventPointDefinitionMode;
+ (id)entryEventPointDefinitionSyncBubble;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointMode;

@end
