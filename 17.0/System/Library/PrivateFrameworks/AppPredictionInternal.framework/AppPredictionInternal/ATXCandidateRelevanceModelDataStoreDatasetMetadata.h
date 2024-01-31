@class NSDate;

@interface ATXCandidateRelevanceModelDataStoreDatasetMetadata : NSObject

@property (readonly, nonatomic) unsigned long long numberOfPositiveSamples;
@property (readonly, nonatomic) unsigned long long numberOfSamples;
@property (readonly, nonatomic) unsigned long long numberOfDaysWithPositiveSamples;
@property (readonly, nonatomic) unsigned long long numberOfDaysWithSamples;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)datasetMetadataForDataPoints:(id)a0;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumberOfPositiveSamples:(unsigned long long)a0 numberOfSamples:(unsigned long long)a1 numberOfDaysWithPositiveSamples:(unsigned long long)a2 numberOfDaysWithSamples:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5;
- (BOOL)isEqualToATXCandidateRelevanceModelDataStoreDatasetMetadata:(id)a0;

@end
