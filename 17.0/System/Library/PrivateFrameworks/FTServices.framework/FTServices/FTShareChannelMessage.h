@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (BOOL)wantsBinaryPush;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)highPriority;
- (long long)command;
- (BOOL)isWebTunnelMessage;
- (id)topic;
- (long long)responseCommand;
- (id)additionalMessageHeadersForOutgoingPush;
- (void).cxx_destruct;
- (BOOL)isIDSMessage;
- (void)handleResponseHeaders:(id)a0;
- (id)messageBody;
- (BOOL)wantsCompressedBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsResponse;
- (BOOL)wantsAPSRetries;
- (id)userAgentHeaderString;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;

@end
