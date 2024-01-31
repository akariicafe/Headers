@class NSString;

@interface HMAccessoryInfoProtoAccountInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char signedIn : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasAaAltDSID;
@property (retain, nonatomic) NSString *aaAltDSID;
@property (readonly, nonatomic) BOOL hasAmsAltDSID;
@property (retain, nonatomic) NSString *amsAltDSID;
@property (nonatomic) BOOL hasSignedIn;
@property (nonatomic) BOOL signedIn;

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
