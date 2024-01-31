@class NSString;

@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest <NSCopying> {
    struct { unsigned char criticalAlertSetting : 1; } _has;
}

@property (nonatomic) BOOL hasCriticalAlertSetting;
@property (nonatomic) int criticalAlertSetting;
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
- (int)StringAsCriticalAlertSetting:(id)a0;
- (id)criticalAlertSettingAsString:(int)a0;

@end
