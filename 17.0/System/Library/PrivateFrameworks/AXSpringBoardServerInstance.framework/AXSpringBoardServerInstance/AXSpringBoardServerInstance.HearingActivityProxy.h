@interface AXSpringBoardServerInstance.HearingActivityProxy : NSObject

- (id)init;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (void)finishWithCompletionHandler:(void (^)(void))a0;

@end
