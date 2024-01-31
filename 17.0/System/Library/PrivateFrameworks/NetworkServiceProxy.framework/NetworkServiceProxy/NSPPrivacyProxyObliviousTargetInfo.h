@class NSString;

@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; } _has;
}

@property (retain, nonatomic) NSString *targetHost;
@property (retain, nonatomic) NSString *proxyURLPath;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;

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
