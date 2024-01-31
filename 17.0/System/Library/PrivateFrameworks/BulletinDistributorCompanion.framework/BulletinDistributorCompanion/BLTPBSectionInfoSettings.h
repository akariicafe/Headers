@class BLTPBMuteAssertion;

@interface BLTPBSectionInfoSettings : PBCodable <NSCopying> {
    struct { unsigned char announceSetting : 1; unsigned char scheduledDeliverySetting : 1; unsigned char timeSensitiveSetting : 1; unsigned char userConfiguredTimeSensitiveSetting : 1; } _has;
}

@property (nonatomic) BOOL hasAnnounceSetting;
@property (nonatomic) int announceSetting;
@property (readonly, nonatomic) BOOL hasMuteAssertion;
@property (retain, nonatomic) BLTPBMuteAssertion *muteAssertion;
@property (nonatomic) BOOL hasTimeSensitiveSetting;
@property (nonatomic) int timeSensitiveSetting;
@property (nonatomic) BOOL hasUserConfiguredTimeSensitiveSetting;
@property (nonatomic) BOOL userConfiguredTimeSensitiveSetting;
@property (nonatomic) BOOL hasScheduledDeliverySetting;
@property (nonatomic) int scheduledDeliverySetting;

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
