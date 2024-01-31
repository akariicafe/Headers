@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying> {
    struct { unsigned char retryAfterMillis : 1; unsigned char allowed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) BOOL hasAllowed;
@property (nonatomic) BOOL allowed;
@property (nonatomic) BOOL hasRetryAfterMillis;
@property (nonatomic) long long retryAfterMillis;

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
