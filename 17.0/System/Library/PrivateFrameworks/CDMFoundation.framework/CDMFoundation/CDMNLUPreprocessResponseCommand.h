@class SIRINLUINTERNALPreprocessingWrapper;

@interface CDMNLUPreprocessResponseCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithPreprocessingWrapper:(id)a0;

@end
