@class NSArray, NSString;

@interface FCRefreshNotificationsForChannelsCommand : FCCommand

@property (copy, nonatomic) NSArray *channelIDs;
@property (copy, nonatomic) NSArray *paidChannelIDs;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;
@property (nonatomic) int deviceDigestMode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithChannelIDs:(id)a0 paidChannelIDs:(id)a1 userID:(id)a2 deviceToken:(id)a3 storefrontID:(id)a4 deviceDigestMode:(int)a5;

@end
