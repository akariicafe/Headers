@class NSData, NSString;

@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (readonly, nonatomic) BOOL hasSourceTimeZoneIdentifier;
@property (retain, nonatomic) NSString *sourceTimeZoneIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLocaleIdentifier;
@property (retain, nonatomic) NSString *sourceLocaleIdentifier;

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
