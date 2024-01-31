@class NSString, NSData, NSMutableArray;

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char uncertainty : 1; unsigned char locationOfInterestType : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) double uncertainty;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL hasLocationOfInterestType;
@property (nonatomic) int locationOfInterestType;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (retain, nonatomic) NSData *geoData;
@property (retain, nonatomic) NSMutableArray *visits;

+ (Class)visitsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsLocationOfInterestType:(id)a0;
- (id)locationOfInterestTypeAsString:(int)a0;
- (void)addVisits:(id)a0;
- (void)clearVisits;
- (id)visitsAtIndex:(unsigned long long)a0;
- (unsigned long long)visitsCount;

@end
