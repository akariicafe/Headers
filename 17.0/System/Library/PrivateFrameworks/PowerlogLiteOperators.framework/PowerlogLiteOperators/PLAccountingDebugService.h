@class NSArray;

@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames;

+ (void)load;
+ (void)printError:(id)a0;

- (void)testDistribution1;
- (id)init;
- (void)testCorrection3;
- (void)testDistribution4;
- (void)testQualification1;
- (BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)a0 withRootNodeID:(int)a1 withEnergy:(double)a2 withDate:(id)a3;
- (BOOL)verifyLastDistributionEventWithDistributionID:(int)a0 withNodeName:(id)a1 withWeight:(double)a2;
- (BOOL)verifyLastQualificationEventWithQualificationID:(int)a0 withNodeName:(id)a1;
- (void)testShortQualificationEventDuration;
- (void)testReloadAfter1;
- (BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)a0 withTotalCorrectionEnergy:(double)a1 withRootNodeID:(int)a2;
- (void)testReloadAfter2;
- (void)testCorrectionInMemory;
- (void)testCorrection4;
- (void)blockingClearQueues;
- (void)testPerformance;
- (void)testQualification2;
- (void)testDistribution3;
- (BOOL)verifyTotalEnergyWithNodeName:(id)a0 withTotalEnergy:(double)a1 withRootNodeID:(int)a2 withEpsilon:(double)a3;
- (void)testAddRemoveDistributionEventForward;
- (void)testReloadBefore2;
- (void)testCurrentDistributionEventForward;
- (void).cxx_destruct;
- (BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)a0 withRootNodeID:(int)a1 withNodeName:(id)a2 withQualificationEnergy:(double)a3 withDate:(id)a4;
- (void)testReloadBefore1;
- (void)testDistribution5;
- (void)testCorrection1;
- (void)blockingLogGasGaugeWithTotalPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)testPowerEventIntervalOverlap;
- (void)testQualification3;
- (void)testChunk;
- (void)testShortDistributionEventDuration;
- (void)testCorrection2;
- (void)testDistribution2;
- (BOOL)verifyLastPowerEventWithRootNodeID:(int)a0 withPower:(double)a1;

@end
