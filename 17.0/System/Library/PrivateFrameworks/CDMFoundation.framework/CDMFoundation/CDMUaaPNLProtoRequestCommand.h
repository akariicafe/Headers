@class SIRINLUEXTERNALRequestID, SIRINLUINTERNALUAAP_PARSERUaaPParserRequest;

@interface CDMUaaPNLProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)a0 requestId:(id)a1;

@end
