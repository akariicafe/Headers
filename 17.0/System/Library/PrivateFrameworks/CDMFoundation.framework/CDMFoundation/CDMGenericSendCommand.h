@class CDMNluResponse, NSString, CDMEmbeddingGraphResponseCommand, SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse, SIRINLUINTERNALPreprocessingWrapper, CDMSsuInferenceGraphResponseCommand, SIRINLUResponse;

@interface CDMGenericSendCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) CDMNluResponse *cdmNluResponse;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;
@property (readonly, nonatomic) CDMEmbeddingGraphResponseCommand *embeddingResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *subwordEmbeddingResponse;
@property (readonly, nonatomic) CDMSsuInferenceGraphResponseCommand *ssuInferenceResponse;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEmbeddingGraphResponse:(id)a0;
- (id)initWithCDMNluResponse:(id)a0 clientId:(id)a1;
- (id)initWithError:(id)a0 clientId:(id)a1;
- (id)initWithPreprocessingWrapper:(id)a0 clientId:(id)a1;
- (id)initWithSsuInferenceGraphResponse:(id)a0;
- (id)initWithSubwordEmbeddingResponse:(id)a0 clientId:(id)a1;

@end
