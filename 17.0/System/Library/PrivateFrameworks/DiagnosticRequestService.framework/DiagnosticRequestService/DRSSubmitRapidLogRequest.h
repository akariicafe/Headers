@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (Class)_moClass;
+ (id)entityName;

- (id)initWithXPCDict:(id)a0;
- (unsigned long long)logSizeLimitBytes;
- (id)targetContainerName;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;

@end
