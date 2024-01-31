@class NSString;

@interface ICPAPlayActivityEnqueuerProperties : PBCodable <NSCopying> {
    unsigned long long _storeAccountID;
    NSString *_buildVersion;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_storeFrontID;
    int _systemReleaseType;
    NSString *_timeZoneName;
    BOOL _privateListeningEnabled;
    BOOL _sBEnabled;
    struct { unsigned char storeAccountID : 1; unsigned char systemReleaseType : 1; unsigned char privateListeningEnabled : 1; unsigned char sBEnabled : 1; } _has;
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
