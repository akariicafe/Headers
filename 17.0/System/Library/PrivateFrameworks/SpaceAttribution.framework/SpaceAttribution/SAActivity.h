@class NSBackgroundActivityScheduler;

@interface SAActivity : NSObject

@property (retain) NSBackgroundActivityScheduler *activity;
@property (copy) id /* block */ completionHandler;
@property BOOL deferActivity;

+ (id)newWithActivity:(id)a0 andCompletionHandler:(id /* block */)a1;

- (BOOL)shouldDefer;
- (void).cxx_destruct;
- (void)setActivityResult:(long long)a0;
- (id)initWithActivity:(id)a0 completionHandler:(id /* block */)a1;

@end
