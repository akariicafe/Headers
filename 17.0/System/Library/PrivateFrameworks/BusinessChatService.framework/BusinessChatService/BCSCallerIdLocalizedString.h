@class NSString;

@interface BCSCallerIdLocalizedString : PBCodable <NSCopying> {
    struct { unsigned char isDefault : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL hasIsDefault;
@property (nonatomic) BOOL isDefault;

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
