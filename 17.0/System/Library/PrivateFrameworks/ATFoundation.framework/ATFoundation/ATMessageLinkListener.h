@protocol ATMessageLinkListenerDelegate;

@interface ATMessageLinkListener : NSObject

@property (weak, nonatomic) id<ATMessageLinkListenerDelegate> delegate;

- (BOOL)start;
- (void)stop;
- (void).cxx_destruct;

@end
