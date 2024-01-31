@class NSString, _MRDeviceInfoMessageProtobuf;

@interface _MROriginProtobuf : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; unsigned char type : 1; unsigned char isLocallyHosted : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) int identifier;
@property (readonly, nonatomic) BOOL hasDeviceInfoDeprecated;
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated;
@property (nonatomic) BOOL hasIsLocallyHosted;
@property (nonatomic) BOOL isLocallyHosted;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
