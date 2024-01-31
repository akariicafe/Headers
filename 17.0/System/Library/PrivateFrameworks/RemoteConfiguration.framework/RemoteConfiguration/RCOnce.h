@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)init;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)executeOnce:(id /* block */)a0;

@end
