@protocol ATXSuggestionExecutableProtocol;

@interface ATXInteractionSuggestionRequest : ATXSuggestionRequest <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXSuggestionExecutableProtocol> psPredictionContext;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatorId:(id)a0 consumerSubType:(unsigned char)a1 psPredictionContext:(id)a2 timeout:(double)a3;
- (id)archivePredictionContext;
- (id)initWithOriginatorId:(id)a0 consumerSubType:(unsigned char)a1 psPredictionContext:(id)a2;
- (id)initWithUUID:(id)a0 originatorId:(id)a1 consumerSubType:(unsigned char)a2 psPredictionContext:(id)a3 timeout:(double)a4;

@end
