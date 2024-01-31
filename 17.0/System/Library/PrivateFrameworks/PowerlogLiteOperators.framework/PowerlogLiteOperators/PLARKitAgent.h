@interface PLARKitAgent : PLAgent

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)log;
- (void)initOperatorDependancies;

@end
