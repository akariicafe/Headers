@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {
    struct { unsigned char widgetVisibleSectionsLimit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *todaySectionConfigs;
@property (nonatomic) BOOL hasWidgetVisibleSectionsLimit;
@property (nonatomic) unsigned long long widgetVisibleSectionsLimit;

+ (Class)todaySectionConfigsType;

- (void)addTodaySectionConfigs:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)todaySectionConfigsAtIndex:(unsigned long long)a0;
- (void)clearTodaySectionConfigs;
- (unsigned long long)todaySectionConfigsCount;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
