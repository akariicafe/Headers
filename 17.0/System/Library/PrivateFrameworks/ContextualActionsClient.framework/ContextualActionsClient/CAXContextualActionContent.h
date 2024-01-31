@class NSString, NSDictionary;

@interface CAXContextualActionContent : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)jsonRawData;
- (id)json;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentType:(id)a0 contentMetadata:(id)a1;

@end
