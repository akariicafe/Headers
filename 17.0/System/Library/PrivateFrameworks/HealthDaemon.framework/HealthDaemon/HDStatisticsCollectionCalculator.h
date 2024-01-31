@class _HKDateIntervalCollection, NSDateInterval, NSArray, NSString, HKQuantityType;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider, HDStatisticsCollectionCalculatorDataSource;

@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding> {
    struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> { struct __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> { struct _HDStatisticsCollectionCalculatorImplementation *__value_; } __ptr_; } _implementation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long mergeStrategy;
@property (readonly, nonatomic) long long computationMethod;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double mergeGranularity;
@property (readonly, copy, nonatomic) NSArray *maskedIntervals;
@property (copy, nonatomic) id /* block */ statisticsHandler;
@property (weak, nonatomic) id<HDStatisticsCollectionCalculatorDataSource> dataSource;
@property (weak, nonatomic) id<HDStatisticsCollectionCalculatorSourceOrderProvider> sourceOrderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calculatorForArchivedRepresentation:(id)a0 error:(id *)a1;
+ (id)calculatorForCategoryType:(id)a0 intervalCollection:(id)a1 options:(unsigned long long)a2 mergeStrategy:(unsigned long long)a3;
+ (id)calculatorForQuantityType:(id)a0 intervalCollection:(id)a1 options:(unsigned long long)a2 mergeStrategy:(unsigned long long)a3;
+ (id)calculatorForQuantityType:(id)a0 intervalCollection:(id)a1 options:(unsigned long long)a2 mergeStrategy:(unsigned long long)a3 computationMethod:(long long)a4;

- (void)reset;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)queryForInitialStatisticsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)archivedRepresentationWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)sourceForSourceID:(long long)a0;
- (void)orderSourceIDs:(void *)a0;
- (BOOL)addSampleValue:(double)a0 startTime:(double)a1 endTime:(double)a2 sourceID:(long long)a3 error:(id *)a4;
- (id)bundleIdentifierForSourceID:(long long)a0;
- (void)configureMergeAnchor:(id)a0;
- (id)currentStatistics;
- (BOOL)invalidateInterval:(id)a0 error:(id *)a1;
- (BOOL)performAddSampleTransaction:(id /* block */)a0 error:(id *)a1;
- (BOOL)performInitialStatisticsTransaction:(id /* block */)a0 error:(id *)a1;
- (BOOL)setMaskedIntervals:(id)a0 error:(id *)a1;
- (void)setStatisticsConfiguration:(id)a0;

@end
