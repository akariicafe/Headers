@class NSString, BWMemoryPool;

@interface BWMemoryPoolFlushAssertion : NSObject {
    BWMemoryPool *_pool;
    NSString *_identifier;
}

- (void)dealloc;

@end
