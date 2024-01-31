@class NSData, NSString, NSError;

@interface COMessageSessionManagementRequest : COMessageChannelRequest

@property (readonly, nonatomic) long long commandType;
@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, copy, nonatomic) NSString *payloadType;
@property (readonly, copy, nonatomic) NSError *remoteError;
@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, copy, nonatomic) NSString *subTopic;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCommandType:(long long)a0 error:(id)a1 topic:(id)a2 subTopic:(id)a3;
- (id)initWithCommandType:(long long)a0 payload:(id)a1 payloadType:(id)a2 topic:(id)a3 subTopic:(id)a4;

@end
