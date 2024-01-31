@class NSString, PBUnknownFields;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    float _amount;
    struct { unsigned char has_amount : 1; } _flags;
}

@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) float amount;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
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
