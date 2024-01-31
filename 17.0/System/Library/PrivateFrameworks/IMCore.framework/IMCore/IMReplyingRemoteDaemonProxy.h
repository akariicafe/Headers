@class IMDaemonController;

@interface IMReplyingRemoteDaemonProxy : NSProxy

@property (readonly, weak, nonatomic) IMDaemonController *daemonController;
@property (nonatomic) BOOL synchronousReplies;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDaemonController:(id)a0 synchronousReplies:(BOOL)a1;

@end
