@class NSString, NSXPCConnection, MLModelDescription, MLModelConfiguration, NSObject, MLModelMetadata;
@protocol CoreMLModelSecurityProtocol;

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connectionToModelSecurityService;
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *secureModelProxy;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 decryptCredential:(id)a2 error:(id *)a3;
+ (id)modelWithContentsOfURL:(id)a0 decryptCredential:(id)a1 error:(id *)a2;
+ (id)sandboxExtensionPathsForModelURL:(id)a0;
+ (id)sandboxExtensionTokenForModelURL:(id)a0;

- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;

@end
