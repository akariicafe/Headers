@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)init;
- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)executeOnce:(id /* block */)a0;

@end
