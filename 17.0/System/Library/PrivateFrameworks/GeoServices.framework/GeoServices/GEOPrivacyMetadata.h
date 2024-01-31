@class PBUnknownFields;

@interface GEOPrivacyMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _isManagedAccount;
    BOOL _isMismatchedStorefrontDeviceRegion;
    BOOL _isSharedIpadForEducation;
    BOOL _isUnderageAccount;
    struct { unsigned char has_isManagedAccount : 1; unsigned char has_isMismatchedStorefrontDeviceRegion : 1; unsigned char has_isSharedIpadForEducation : 1; unsigned char has_isUnderageAccount : 1; } _flags;
}

@property (nonatomic) BOOL hasIsUnderageAccount;
@property (nonatomic) BOOL isUnderageAccount;
@property (nonatomic) BOOL hasIsManagedAccount;
@property (nonatomic) BOOL isManagedAccount;
@property (nonatomic) BOOL hasIsMismatchedStorefrontDeviceRegion;
@property (nonatomic) BOOL isMismatchedStorefrontDeviceRegion;
@property (nonatomic) BOOL hasIsSharedIpadForEducation;
@property (nonatomic) BOOL isSharedIpadForEducation;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
