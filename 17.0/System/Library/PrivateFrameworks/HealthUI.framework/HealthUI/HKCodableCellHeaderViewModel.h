@class NSString, HKCodableColorRepresentation;

@interface HKCodableCellHeaderViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableCellHeaderViewModel_1 { unsigned char detailDate : 1; unsigned char detailsVisibility : 1; unsigned char forceDayGranularity : 1; } _has;
}

@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) BOOL hasSystemImageName;
@property (retain, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) BOOL hasForegroundColor;
@property (retain, nonatomic) HKCodableColorRepresentation *foregroundColor;
@property (nonatomic) BOOL hasDetailDate;
@property (nonatomic) double detailDate;
@property (nonatomic) BOOL hasForceDayGranularity;
@property (nonatomic) BOOL forceDayGranularity;
@property (readonly, nonatomic) BOOL hasDetailText;
@property (retain, nonatomic) NSString *detailText;
@property (nonatomic) BOOL hasDetailsVisibility;
@property (nonatomic) long long detailsVisibility;

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

@end
