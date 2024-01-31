@class SGMIMetricsTrialMetadata, SGMIMetricsSubmodelsStats;

@interface SGMIMetricsUpdateProcessInformation : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _ctsJobConstraints;
    struct { unsigned char biomeAggregationPerformanceInMilliSeconds : 1; unsigned char cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds : 1; unsigned char submodelsPruningForCappingPolicyPerformanceInMilliSeconds : 1; unsigned char submodelsUpdatePerformanceInMilliSeconds : 1; unsigned char daysAvailableDuringIncrementalUpdate : 1; unsigned char daysProcessedDuringIncrementalUpdate : 1; unsigned char deletedEmailsCount : 1; unsigned char deletedTokensCountToComplyToCappingPolicy : 1; unsigned char hoursSinceLastIncrementalUpdate : 1; unsigned char hoursSinceReference : 1; unsigned char mailsProcessedDuringIncrementalUpdate : 1; unsigned char rollbackedEmailsCountToComplyToPostDeletionPolicy : 1; unsigned char rollbackedSlicesCountToComplyToPostDeletionPolicy : 1; unsigned char isSubmodelRebuilt : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata;
@property (readonly, nonatomic) BOOL hasBackgroundTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata;
@property (nonatomic) BOOL hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) unsigned long long ctsJobConstraintsCount;
@property (readonly, nonatomic) int *ctsJobConstraints;
@property (nonatomic) BOOL hasHoursSinceLastIncrementalUpdate;
@property (nonatomic) unsigned int hoursSinceLastIncrementalUpdate;
@property (nonatomic) BOOL hasIsSubmodelRebuilt;
@property (nonatomic) BOOL isSubmodelRebuilt;
@property (nonatomic) BOOL hasDaysAvailableDuringIncrementalUpdate;
@property (nonatomic) unsigned int daysAvailableDuringIncrementalUpdate;
@property (nonatomic) BOOL hasDaysProcessedDuringIncrementalUpdate;
@property (nonatomic) unsigned int daysProcessedDuringIncrementalUpdate;
@property (nonatomic) BOOL hasMailsProcessedDuringIncrementalUpdate;
@property (nonatomic) unsigned int mailsProcessedDuringIncrementalUpdate;
@property (nonatomic) BOOL hasDeletedTokensCountToComplyToCappingPolicy;
@property (nonatomic) unsigned int deletedTokensCountToComplyToCappingPolicy;
@property (nonatomic) BOOL hasDeletedEmailsCount;
@property (nonatomic) unsigned int deletedEmailsCount;
@property (nonatomic) BOOL hasRollbackedSlicesCountToComplyToPostDeletionPolicy;
@property (nonatomic) unsigned int rollbackedSlicesCountToComplyToPostDeletionPolicy;
@property (nonatomic) BOOL hasRollbackedEmailsCountToComplyToPostDeletionPolicy;
@property (nonatomic) unsigned int rollbackedEmailsCountToComplyToPostDeletionPolicy;
@property (readonly, nonatomic) BOOL hasSubmodelsStats;
@property (retain, nonatomic) SGMIMetricsSubmodelsStats *submodelsStats;
@property (nonatomic) BOOL hasBiomeAggregationPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long biomeAggregationPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasSubmodelsUpdatePerformanceInMilliSeconds;
@property (nonatomic) unsigned long long submodelsUpdatePerformanceInMilliSeconds;
@property (nonatomic) BOOL hasSubmodelsPruningForCappingPolicyPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long submodelsPruningForCappingPolicyPerformanceInMilliSeconds;
@property (nonatomic) BOOL hasCumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long cumulatedSubmodelsRollbackForPostDeletionPolicyPerformanceInMilliSeconds;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCtsJobConstraints:(id)a0;
- (void)addCtsJobConstraints:(int)a0;
- (void)clearCtsJobConstraints;
- (id)ctsJobConstraintsAsString:(int)a0;
- (int)ctsJobConstraintsAtIndex:(unsigned long long)a0;
- (void)setCtsJobConstraints:(int *)a0 count:(unsigned long long)a1;

@end
