@interface STSCASessionStats : NSObject

@property (nonatomic) long long totalTransactionsInSession;
@property (nonatomic) long long totalSuccessfulTransactionsInSession;

- (id)init;
- (void)postReaderSessionEvent;

@end
