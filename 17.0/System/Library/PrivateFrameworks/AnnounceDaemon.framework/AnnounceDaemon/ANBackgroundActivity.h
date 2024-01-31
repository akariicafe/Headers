@class NSBackgroundActivityScheduler;

@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>

@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity;

- (id)init;
- (BOOL)shouldDefer;
- (void).cxx_destruct;
- (void)scheduleWithBlock:(id /* block */)a0;

@end
