@class NSString, NSNumber, NSDictionary;

@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric>

@property (copy, nonatomic) NSString *modelHash;
@property (copy, nonatomic) NSString *nnModelNetHash;
@property (copy, nonatomic) NSString *nnModelShapeHash;
@property (copy, nonatomic) NSString *nnModelWeightsHash;
@property (copy, nonatomic) NSNumber *modelDimension;
@property (copy, nonatomic) NSNumber *modelType;
@property (copy, nonatomic) NSNumber *modelLoadTime;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *compilerVersion;
@property (copy, nonatomic) NSNumber *computeUnits;
@property (copy, nonatomic) NSNumber *modelOrigin;
@property (copy, nonatomic) NSNumber *modelLoadError;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSNumber *firstPartyExecutable;
@property (copy, nonatomic) NSNumber *modelIsEncrypted;
@property (copy, nonatomic) NSNumber *modelProgramValidationError;
@property (copy, nonatomic) NSNumber *modelProgramParsingError;
@property (copy, nonatomic) NSNumber *modelEngineType;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSNumber *containsCustomLayer;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)numberFromCString:(const char *)a0;
- (void)extractAndSetModelDetailsFromArchive:(void *)a0;
- (void).cxx_destruct;

@end
