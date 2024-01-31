@interface CPDistributedMessagingDelayedReplyContext : NSObject

@property (nonatomic) unsigned int replyPort;
@property (nonatomic) BOOL portPassing;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)a0 portPassing:(BOOL)a1;

@end
