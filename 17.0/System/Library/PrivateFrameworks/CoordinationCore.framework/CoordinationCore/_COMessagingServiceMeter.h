@class NSDictionary, NSMutableDictionary;

@interface _COMessagingServiceMeter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSDictionary *limits;
@property (readonly, nonatomic) NSMutableDictionary *peaks;
@property (readonly, nonatomic) int registration;

- (id)init;
- (void)dealloc;
- (unsigned long long)sendLimitForIdentifier:(id)a0;
- (BOOL)clientIdentifier:(id)a0 canReceiveLength:(unsigned long long)a1;
- (BOOL)isEvaluatingIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)clientIdentifier:(id)a0 canSendLength:(unsigned long long)a1;
- (unsigned long long)receiveLimitForIdentifier:(id)a0;
- (void)_withLock:(id /* block */)a0;

@end
