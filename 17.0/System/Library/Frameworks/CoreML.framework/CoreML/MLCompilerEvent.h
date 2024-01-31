@class NSString, NSNumber, NSDictionary;

@interface MLCompilerEvent : NSObject <CUTCoreAnalyticsMetric>

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelHash;
@property (copy, nonatomic) NSNumber *modelType;
@property (copy, nonatomic) NSNumber *modelOrigin;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelCompiledWithVersion;
@property (copy, nonatomic) NSString *compilerVersion;
@property (copy, nonatomic) NSNumber *milUpgradeStatus;
@property (copy, nonatomic) NSString *milUpgradeFailureReason;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
