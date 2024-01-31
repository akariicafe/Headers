@class NSString, NSData, SPProtoCacheMessage;

@interface SPProtoSockPuppetObject : PBCodable <NSCopying> {
    struct { unsigned char ndouble : 1; unsigned char nint64 : 1; unsigned char nuint64 : 1; unsigned char nfloat : 1; unsigned char nint32 : 1; unsigned char nuint32 : 1; unsigned char subtype : 1; unsigned char nbool : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasSubtype;
@property (nonatomic) int subtype;
@property (readonly, nonatomic) BOOL hasCacheMessage;
@property (retain, nonatomic) SPProtoCacheMessage *cacheMessage;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL hasNdouble;
@property (nonatomic) double ndouble;
@property (nonatomic) BOOL hasNfloat;
@property (nonatomic) float nfloat;
@property (nonatomic) BOOL hasNint64;
@property (nonatomic) long long nint64;
@property (nonatomic) BOOL hasNint32;
@property (nonatomic) int nint32;
@property (nonatomic) BOOL hasNuint64;
@property (nonatomic) unsigned long long nuint64;
@property (nonatomic) BOOL hasNuint32;
@property (nonatomic) unsigned int nuint32;
@property (nonatomic) BOOL hasNbool;
@property (nonatomic) BOOL nbool;
@property (readonly, nonatomic) BOOL hasObject;
@property (retain, nonatomic) NSData *object;

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
