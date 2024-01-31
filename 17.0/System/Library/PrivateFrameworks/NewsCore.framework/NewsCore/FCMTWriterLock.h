@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (id)init;
- (void)performReadSync:(id /* block */)a0;
- (void)lock;
- (void)unlock;
- (void).cxx_destruct;
- (void)performWriteSync:(id /* block */)a0;
- (id)initWithUnderlyingLock:(id)a0;

@end
