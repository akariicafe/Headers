@class NSData;

@interface TUConversationUnreliableMessengerConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long establishChannelMaxAttempts;
@property (readonly, nonatomic) unsigned long long establishChannelRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long egressMessagePayloadMaxSizeBytes;
@property (readonly, nonatomic) unsigned long long channelStreamMaxQueueSize;
@property (readonly, nonatomic) unsigned long long channelStreamMaxTries;
@property (readonly, nonatomic) unsigned long long channelStreamRetryIntervalMillis;
@property (readonly, nonatomic) unsigned long long seqNumBufferSize;
@property (copy, nonatomic) NSData *idsAliasingSalt;

+ (id)shared;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEstablishChannelMaxAttempts:(unsigned long long)a0 establishChannelRetryIntervalMillis:(unsigned long long)a1 egressMessagePayloadMaxSizeBytes:(unsigned long long)a2 channelStreamMaxQueueSize:(unsigned long long)a3 channelStreamMaxTries:(unsigned long long)a4 channelStreamRetryIntervalMillis:(unsigned long long)a5 seqNumBufferSize:(unsigned long long)a6;
- (BOOL)isEqualToConversationUnreliableMessengerConfig:(id)a0;

@end
