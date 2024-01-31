@class NSMutableArray;

@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying> {
    struct { unsigned char enabledResidentsDeviceCapabilities : 1; unsigned char isFaceClassificationEnabled : 1; unsigned char isOwner : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *homeKitCameraUserSettings;
@property (retain, nonatomic) NSMutableArray *homeKitCameraSettings;
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasIsFaceClassificationEnabled;
@property (nonatomic) BOOL isFaceClassificationEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;

+ (Class)homeKitCameraSettingsType;
+ (Class)homeKitCameraUserSettingsType;

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
- (void)addHomeKitCameraSettings:(id)a0;
- (void)addHomeKitCameraUserSettings:(id)a0;
- (void)clearHomeKitCameraSettings;
- (void)clearHomeKitCameraUserSettings;
- (id)homeKitCameraSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitCameraSettingsCount;
- (id)homeKitCameraUserSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitCameraUserSettingsCount;

@end
