@class NSDictionary, NSMutableDictionary;

@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_sessions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *sessions;

- (BOOL)isEqualToATXUIFeedbackSessionContext:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithSessions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uiFeedbackSessionWithSessionIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)a0 endDate:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)a0 startDate:(id)a1;

@end
