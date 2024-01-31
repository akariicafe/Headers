@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (Class)_moClass;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (id)entityName;

- (id)recordRepresentation;
- (id)initWithXPCDict:(id)a0;
- (id)targetContainerName;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)requestType;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (void).cxx_destruct;
- (id)debugDescription;

@end
