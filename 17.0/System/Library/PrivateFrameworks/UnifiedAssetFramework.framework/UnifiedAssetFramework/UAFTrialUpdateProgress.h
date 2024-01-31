@class NSString, NSMutableDictionary;

@interface UAFTrialUpdateProgress : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long totalWork;
@property (nonatomic) unsigned long long completedWork;
@property (nonatomic) unsigned long long reportedTotalWork;
@property (nonatomic) unsigned long long reportedCompletedWork;
@property (nonatomic) unsigned long long reportedStatus;
@property (retain, nonatomic) NSMutableDictionary *statuses;
@property (retain, nonatomic) NSMutableDictionary *factors;
@property (nonatomic) BOOL onDemandFactorsHaveStarted;
@property (nonatomic) BOOL outOfSpace;
@property (copy, nonatomic) id /* block */ detailedProgressWithStatus;

+ (id)getSerialQueue;

- (void).cxx_destruct;
- (void)summarize;
- (id)getFactorProgressKey:(id)a0 factor:(id)a1;
- (id)initWithTrialFactors:(id)a0 detailedProgressWithStatus:(id /* block */)a1;
- (void)onDemandFactorsStarted;
- (void)outOfSpaceEncountered;
- (void)reportStatus:(unsigned long long)a0;
- (void)trialFactorFinished:(id)a0 namespace:(id)a1;
- (void)trialFactorProgress:(id)a0 namespace:(id)a1 fractionCompleted:(double)a2 status:(unsigned long long)a3;
- (void)trialFactorStarted:(id)a0 namespace:(id)a1 size:(unsigned long long)a2 status:(unsigned long long)a3;
- (void)updateFinished;
- (void)updateStarted;

@end
