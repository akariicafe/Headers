@class NSArray, NSString;

@interface FCRefreshNotificationsForTopicsCommand : FCCommand

@property (copy, nonatomic) NSArray *topicIDs;
@property (copy, nonatomic) NSString *topicGroupingID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;
@property (nonatomic) int deviceDigestMode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithTopicsIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2 userID:(id)a3 deviceToken:(id)a4 storefrontID:(id)a5 deviceDigestMode:(int)a6;

@end
