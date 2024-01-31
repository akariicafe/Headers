@class NSArray, NSString;

@interface FCModifyNotificationsForTopicsCommand : FCCommand

@property (copy, nonatomic) NSArray *topicIDsToAdd;
@property (copy, nonatomic) NSArray *topicIDsToRemove;
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
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (id)initWithTopicIDsToAdd:(id)a0 topicIDsToRemove:(id)a1 withTopicGroupingID:(id)a2 fromChannelID:(id)a3 userID:(id)a4 deviceToken:(id)a5 storefrontID:(id)a6 deviceDigestMode:(int)a7;

@end
