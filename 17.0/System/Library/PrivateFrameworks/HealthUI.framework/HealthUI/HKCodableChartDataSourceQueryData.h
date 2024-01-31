@class NSString, NSData, HKCodableDateComponents;

@interface HKCodableChartDataSourceQueryData : PBCodable <NSCopying> {
    struct APPLE_HKCodableChartDataSourceQueryData_1 { unsigned char endDate : 1; unsigned char firstWeekday : 1; unsigned char startDate : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) BOOL hasQueryDataObject;
@property (retain, nonatomic) NSData *queryDataObject;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasFirstWeekday;
@property (nonatomic) long long firstWeekday;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
