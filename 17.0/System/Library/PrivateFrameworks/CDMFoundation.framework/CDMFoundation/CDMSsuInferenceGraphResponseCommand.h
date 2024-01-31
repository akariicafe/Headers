@class SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse;

@interface CDMSsuInferenceGraphResponseCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse *ssuResponse;

+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithSsuResponse:(id)a0;

@end
