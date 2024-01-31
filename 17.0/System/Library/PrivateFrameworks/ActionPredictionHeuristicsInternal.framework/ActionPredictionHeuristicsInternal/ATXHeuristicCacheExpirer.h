@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {
    NSMutableSet *_expirationEntries;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)stopExpiring:(id)a0 cache:(id)a1;
- (void).cxx_destruct;
- (void)_stop;
- (void)expire;
- (id)initWithCoder:(id)a0;
- (void)startExpiring:(id)a0 cache:(id)a1;

@end
