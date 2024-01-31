@class NSString, NSNumber, NSArray;
@protocol ARTechniqueForwardingStrategy, ARTechniqueDelegate;

@interface ARTechnique : NSObject <ARDotGraph, ARTechniqueProtocol, ARLoggingFullDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<ARTechniqueDelegate> delegate;
@property unsigned long long powerUsage;
@property double bonusLatency;
@property (readonly) NSNumber *traceKey;
@property (retain) NSArray *splitTechniques;
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorForTechnique:(id)a0;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;
+ (id)techniqueMatchingPredicate:(id)a0 inArray:(id)a1;
+ (id)techniqueOfClass:(Class)a0 inArray:(id)a1;

- (id)init;
- (id)processData:(id)a0;
- (id)_fullDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (long long)captureBehavior;
- (BOOL)deterministicMode;
- (void)dotGraphWithLines:(id)a0;
- (id)initWithParallelTechniques:(id)a0;
- (id)initWithTechniques:(id)a0;
- (void)mergeResultData:(id)a0 intoData:(id)a1 context:(id)a2;
- (unsigned long long)optionalSensorDataTypes;
- (id)predictedResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (void)replaceTechniques:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)siblingTechniquesDidChange:(id)a0;
- (id)techniqueMatchingPredicate:(id)a0;
- (id)techniqueOfClass:(Class)a0;
- (id)techniques;

@end
