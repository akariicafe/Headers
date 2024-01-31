@class NSString, CLPLocation;

@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying> {
    struct { unsigned char hasWifiFallback : 1; unsigned char uniqueCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;
@property (nonatomic) BOOL hasUniqueCount;
@property (nonatomic) BOOL uniqueCount;
@property (nonatomic) BOOL hasHasWifiFallback;
@property (nonatomic) BOOL hasWifiFallback;

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
