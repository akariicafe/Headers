@class SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest;

@interface CDMSsuInferenceGraphRequestCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest *ssuRequest;

+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithSsuRequest:(id)a0;

@end
