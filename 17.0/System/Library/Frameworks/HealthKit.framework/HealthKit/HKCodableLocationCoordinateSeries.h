@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addCoordinates:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearCoordinates;
- (unsigned long long)coordinatesCount;
- (id)description;
- (void).cxx_destruct;
- (id)coordinatesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
