@interface FAFamilyDetailsCache : NSObject {
    unsigned long long _pendingInviteCount;
    BOOL _isValid;
    BOOL _isValidating;
}

@property (readonly, nonatomic) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)invalidate;
- (void)_fetchPendingInviteCount;
- (void)_setPendingInviteCount:(unsigned long long)a0;

@end
