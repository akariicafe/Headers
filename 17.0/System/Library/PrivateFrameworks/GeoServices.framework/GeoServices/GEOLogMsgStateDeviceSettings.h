@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {
    BOOL _deviceDarkMode;
    BOOL _isAltAccountPairedDevice;
    BOOL _supportsAdvancedMap;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_isAltAccountPairedDevice : 1; unsigned char has_supportsAdvancedMap : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (nonatomic) BOOL hasIsAltAccountPairedDevice;
@property (nonatomic) BOOL isAltAccountPairedDevice;
@property (nonatomic) BOOL hasSupportsAdvancedMap;
@property (nonatomic) BOOL supportsAdvancedMap;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
