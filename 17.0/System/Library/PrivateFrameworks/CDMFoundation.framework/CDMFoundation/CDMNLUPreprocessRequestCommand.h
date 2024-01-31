@class SIRINLUEXTERNALCDMNluRequest;

@interface CDMNLUPreprocessRequestCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;

+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithNLURequest:(id)a0;

@end
