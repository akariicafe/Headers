@class NSString, NSMutableArray;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying> {
    struct { unsigned char didCompleteWithError : 1; unsigned char error : 1; unsigned char numberOfRedirects : 1; unsigned char numberOfRetries : 1; unsigned char taskResume : 1; unsigned char timestamp : 1; unsigned char underlyingError : 1; unsigned char underlyingErrorDomain : 1; unsigned char schedulingTier : 1; unsigned char taskType : 1; unsigned char isBackground : 1; unsigned char unused : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (nonatomic) BOOL hasTaskResume;
@property (nonatomic) unsigned long long taskResume;
@property (nonatomic) BOOL hasDidCompleteWithError;
@property (nonatomic) unsigned long long didCompleteWithError;
@property (nonatomic) BOOL hasNumberOfRetries;
@property (nonatomic) unsigned long long numberOfRetries;
@property (nonatomic) BOOL hasNumberOfRedirects;
@property (nonatomic) unsigned long long numberOfRedirects;
@property (nonatomic) BOOL hasError;
@property (nonatomic) long long error;
@property (nonatomic) BOOL hasUnderlyingError;
@property (nonatomic) long long underlyingError;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) long long underlyingErrorDomain;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasIsBackground;
@property (nonatomic) BOOL isBackground;
@property (retain, nonatomic) NSMutableArray *transactionMetrics;
@property (nonatomic) BOOL hasSchedulingTier;
@property (nonatomic) int schedulingTier;
@property (nonatomic) BOOL hasUnused;
@property (nonatomic) BOOL unused;

+ (Class)transactionMetricsType;

- (void)addTransactionMetrics:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)transactionMetricsCount;
- (id)description;
- (void)clearTransactionMetrics;
- (id)transactionMetricsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTaskType:(id)a0;
- (id)taskTypeAsString:(int)a0;
- (int)StringAsSchedulingTier:(id)a0;
- (id)schedulingTierAsString:(int)a0;

@end
