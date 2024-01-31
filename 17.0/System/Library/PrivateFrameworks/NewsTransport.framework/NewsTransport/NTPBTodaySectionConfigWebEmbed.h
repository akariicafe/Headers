@class NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {
    struct { unsigned char preferredSlotAllocation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (nonatomic) BOOL hasPreferredSlotAllocation;
@property (nonatomic) unsigned long long preferredSlotAllocation;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
