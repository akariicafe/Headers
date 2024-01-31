@class NSString;

@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying> {
    struct { unsigned char grouping : 1; } _has;
}

@property (nonatomic) BOOL hasGrouping;
@property (nonatomic) int grouping;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;

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
- (int)StringAsGrouping:(id)a0;
- (id)groupingAsString:(int)a0;

@end
