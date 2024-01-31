@class NSString;

@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying> {
    struct { unsigned char isExistingAccountTerms : 1; unsigned char termsAccepted : 1; } _has;
}

@property (nonatomic) BOOL hasTermsAccepted;
@property (nonatomic) BOOL termsAccepted;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL hasIsExistingAccountTerms;
@property (nonatomic) BOOL isExistingAccountTerms;
@property (readonly, nonatomic) BOOL hasResponseData;
@property (retain, nonatomic) NSString *responseData;

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
