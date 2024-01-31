@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _notificationType;
    NSString *_notificationName;
    id _observerToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_stop;
- (id)initWithNotification:(id)a0 type:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
