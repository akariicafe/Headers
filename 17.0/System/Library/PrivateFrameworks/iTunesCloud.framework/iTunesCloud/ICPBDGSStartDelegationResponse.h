@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying> {
    NSData *_playerAnisetteMID;
    NSData *_playerDeviceGUID;
    NSMutableArray *_playerInfoContextTokens;
    NSString *_playerUserAgent;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
