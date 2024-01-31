@class NSString;

@interface MAPushChannel : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)channelIDForPopulationType;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)humanReadableChannelName;
- (id)initWithPopulationType:(long long)a0;

@end
