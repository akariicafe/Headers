@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {
    BOOL _closed;
}

@property (readonly, nonatomic) id<_RWIRelayClientConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL sleeping;

- (void)close;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)sendMessage:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithDelegate:(id)a0;
- (void)_closeAndNotifyDelegate:(BOOL)a0;
- (void)closeFromConnection;
- (void)closeInternal;
- (void)dispatchRelayMessage:(id)a0;

@end
