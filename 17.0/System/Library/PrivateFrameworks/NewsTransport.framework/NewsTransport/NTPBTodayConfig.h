@class NSString, NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying> {
    struct { unsigned char widgetSystemReloadInterval : 1; unsigned char widgetSystemReloadJitterMax : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *todayQueueConfigs;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) BOOL hasAudioIndicatorColor;
@property (retain, nonatomic) NSString *audioIndicatorColor;
@property (nonatomic) BOOL hasWidgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) BOOL hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long widgetSystemReloadJitterMax;

+ (Class)todayQueueConfigsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTodayQueueConfigs:(id)a0;
- (void)clearTodayQueueConfigs;
- (id)todayQueueConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)todayQueueConfigsCount;

@end
