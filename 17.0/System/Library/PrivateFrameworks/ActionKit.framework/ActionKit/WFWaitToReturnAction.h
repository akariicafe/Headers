@interface WFWaitToReturnAction : WFAction

@property (nonatomic) int token;

- (void)dealloc;
- (id)disabledOnPlatforms;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
