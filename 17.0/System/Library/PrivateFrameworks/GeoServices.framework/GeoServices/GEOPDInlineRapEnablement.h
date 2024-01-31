@class PBUnknownFields;

@interface GEOPDInlineRapEnablement : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _isAddressEditable;
    BOOL _isHoursEditable;
    BOOL _isPhoneEditable;
    BOOL _isWebsiteEditable;
    struct { unsigned char has_isAddressEditable : 1; unsigned char has_isHoursEditable : 1; unsigned char has_isPhoneEditable : 1; unsigned char has_isWebsiteEditable : 1; } _flags;
}

@property (nonatomic) BOOL hasIsHoursEditable;
@property (nonatomic) BOOL isHoursEditable;
@property (nonatomic) BOOL hasIsPhoneEditable;
@property (nonatomic) BOOL isPhoneEditable;
@property (nonatomic) BOOL hasIsWebsiteEditable;
@property (nonatomic) BOOL isWebsiteEditable;
@property (nonatomic) BOOL hasIsAddressEditable;
@property (nonatomic) BOOL isAddressEditable;
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
