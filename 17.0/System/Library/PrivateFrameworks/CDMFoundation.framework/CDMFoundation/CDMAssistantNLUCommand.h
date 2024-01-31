@class NSString, SIRINLUEXTERNALCDMNluRequest, NLXSchemaNLXClientEventMetadata;

@interface CDMAssistantNLUCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNLURequest:(id)a0 clientId:(id)a1;
- (id)initWithNLURequest:(id)a0 clientId:(id)a1 dataDispatcherContext:(id)a2;
- (id)loggingRequestID;

@end
