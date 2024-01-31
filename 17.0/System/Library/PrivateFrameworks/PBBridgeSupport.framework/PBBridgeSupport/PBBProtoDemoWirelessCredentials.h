@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {
    struct { unsigned char companionDemoConfig : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL hasCompanionDemoConfig;
@property (nonatomic) unsigned int companionDemoConfig;

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
