@class GEOWiFiConnectionQuality;

@interface GEOLogMsgEventWifiConnectionQualityProbe : PBCodable <NSCopying> {
    GEOWiFiConnectionQuality *_wifiConnectionQuality;
}

@property (readonly, nonatomic) BOOL hasWifiConnectionQuality;
@property (retain, nonatomic) GEOWiFiConnectionQuality *wifiConnectionQuality;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
