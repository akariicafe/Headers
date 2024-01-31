@class _DKKnowledgeStorage, NSDate;

@interface _DKPredictionQuery : _DKEventQuery {
    BOOL _isTopNPrediction;
    int _totalSlotsInDay;
    long long _topN;
    double _minLikelihood;
}

@property (nonatomic) int slotDuration;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) BOOL useHistoricalHistogram;
@property (retain, nonatomic) NSDate *asOfDate;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;
@property (copy) id /* block */ predictionHandler;

+ (BOOL)supportsSecureCoding;
+ (id)predictionQueryForStreams:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
+ (id)predictionQueryForStream:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
+ (id)topNPredictionQueryForStream:(id)a0 withPredicate:(id)a1 withTopN:(long long)a2 withMinLikelihood:(double)a3;

- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)handleResults:(id)a0 error:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
