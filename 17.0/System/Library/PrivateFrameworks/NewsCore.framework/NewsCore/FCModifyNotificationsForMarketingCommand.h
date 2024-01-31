@class NSString;

@interface FCModifyNotificationsForMarketingCommand : FCCommand

@property (nonatomic) int type;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *dsid;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithType:(int)a0 action:(int)a1 iTunesDSID:(id)a2;

@end
