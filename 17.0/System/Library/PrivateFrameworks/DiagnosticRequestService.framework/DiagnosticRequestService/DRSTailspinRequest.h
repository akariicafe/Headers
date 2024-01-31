@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) BOOL enforceMinTraceBufferDuration;

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;

+ (Class)_moClass;
+ (BOOL)_shouldScrub;
+ (id)entityName;
+ (id)requiredSystemResourceName;
+ (void)resetEnforceMinTraceBufferDuration;

- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)logType;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (id)requestType;
- (id)_tailspinOptions;
- (void).cxx_destruct;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (id)debugDescription;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;

@end
