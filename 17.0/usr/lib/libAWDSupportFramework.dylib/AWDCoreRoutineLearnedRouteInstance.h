@class NSMutableArray;

@interface AWDCoreRoutineLearnedRouteInstance : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _majorGapLengths;
    struct { unsigned char timestamp : 1; unsigned char failureReason : 1; unsigned char latitudeTruncated : 1; unsigned char length : 1; unsigned char longitudeTruncated : 1; unsigned char numberOfFilteredLocations : 1; unsigned char numberOfInputLocations : 1; unsigned char recoveryTime : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumberOfInputLocations;
@property (nonatomic) int numberOfInputLocations;
@property (nonatomic) BOOL hasNumberOfFilteredLocations;
@property (nonatomic) int numberOfFilteredLocations;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) int length;
@property (nonatomic) BOOL hasRecoveryTime;
@property (nonatomic) int recoveryTime;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL hasLatitudeTruncated;
@property (nonatomic) int latitudeTruncated;
@property (nonatomic) BOOL hasLongitudeTruncated;
@property (nonatomic) int longitudeTruncated;
@property (retain, nonatomic) NSMutableArray *roadClassHistograms;
@property (retain, nonatomic) NSMutableArray *locationTypeHistograms;
@property (readonly, nonatomic) unsigned long long majorGapLengthsCount;
@property (readonly, nonatomic) int *majorGapLengths;

+ (Class)locationTypeHistogramType;
+ (Class)roadClassHistogramType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLocationTypeHistogram:(id)a0;
- (void)addMajorGapLength:(int)a0;
- (void)addRoadClassHistogram:(id)a0;
- (void)clearLocationTypeHistograms;
- (void)clearMajorGapLengths;
- (void)clearRoadClassHistograms;
- (id)locationTypeHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)locationTypeHistogramsCount;
- (int)majorGapLengthAtIndex:(unsigned long long)a0;
- (id)roadClassHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)roadClassHistogramsCount;
- (void)setMajorGapLengths:(int *)a0 count:(unsigned long long)a1;

@end
