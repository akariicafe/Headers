@class NSString, NSMutableDictionary;

@interface UAFAutoAssetProgress : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL updateIsFinished;
@property (nonatomic) unsigned long long totalWork;
@property (nonatomic) unsigned long long completedWork;
@property (nonatomic) unsigned long long reportedTotalWork;
@property (nonatomic) unsigned long long reportedCompletedWork;
@property (nonatomic) unsigned long long reportedStatus;
@property (retain, nonatomic) NSMutableDictionary *statuses;
@property (retain, nonatomic) NSMutableDictionary *autoAssetSets;
@property (copy, nonatomic) id /* block */ detailedProgressWithStatus;

+ (id)getSerialQueue;

- (void).cxx_destruct;
- (void)progress:(id)a0;
- (void)summarize;
- (void)finished:(id)a0;
- (id)initWithAssetSetUsages:(id)a0 configurationManager:(id)a1 detailedProgressWithStatus:(id /* block */)a2;
- (void)reportStatus:(unsigned long long)a0;
- (void)started:(id)a0;
- (void)updateFinished;

@end
