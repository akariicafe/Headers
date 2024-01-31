@class ATXNotificationsPBAggregateData, ATXNotificationsPBSetting, ATXNotificationsPBUsageData;

@interface ATXNotificationsPBSettingLog : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSetting;
@property (retain, nonatomic) ATXNotificationsPBSetting *setting;
@property (readonly, nonatomic) BOOL hasUsage;
@property (retain, nonatomic) ATXNotificationsPBUsageData *usage;
@property (readonly, nonatomic) BOOL hasAggregate;
@property (retain, nonatomic) ATXNotificationsPBAggregateData *aggregate;

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
