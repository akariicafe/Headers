@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initLocal:(id)a0;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)isEqual:(id)a0;
- (id)initDarwin:(id)a0;
- (id)initWithCoder:(id)a0;

@end
