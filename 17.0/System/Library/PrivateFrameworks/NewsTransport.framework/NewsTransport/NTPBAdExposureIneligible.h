@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {
    struct { unsigned char exposureIneligibleLocationType : 1; unsigned char exposureIneligibleReason : 1; unsigned char feedType : 1; } _has;
}

@property (nonatomic) BOOL hasExposureIneligibleLocationType;
@property (nonatomic) int exposureIneligibleLocationType;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasExposureIneligibleLocationTypeId;
@property (retain, nonatomic) NSString *exposureIneligibleLocationTypeId;
@property (nonatomic) BOOL hasExposureIneligibleReason;
@property (nonatomic) int exposureIneligibleReason;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
