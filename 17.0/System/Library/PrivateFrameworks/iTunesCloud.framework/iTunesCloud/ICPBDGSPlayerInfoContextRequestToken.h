@class NSData;

@interface ICPBDGSPlayerInfoContextRequestToken : PBCodable <NSCopying> {
    unsigned long long _accountID;
    unsigned long long _sessionID;
    NSData *_token;
    struct { unsigned char accountID : 1; unsigned char sessionID : 1; } _has;
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
