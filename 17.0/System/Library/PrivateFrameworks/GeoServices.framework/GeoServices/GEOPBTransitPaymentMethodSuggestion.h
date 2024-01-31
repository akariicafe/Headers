@class PBDataReader, GEOPBTransitPaymentMethodSuggestionDetails, PBUnknownFields;

@interface GEOPBTransitPaymentMethodSuggestion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _paymentMethodIndexs;
    GEOPBTransitPaymentMethodSuggestionDetails *_paymentMethodSuggestionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _purpose;
    int _type;
    struct { unsigned char has_purpose : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_paymentMethodIndexs : 1; unsigned char read_paymentMethodSuggestionDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long paymentMethodIndexsCount;
@property (readonly, nonatomic) unsigned int *paymentMethodIndexs;
@property (readonly, nonatomic) BOOL hasPaymentMethodSuggestionDetails;
@property (retain, nonatomic) GEOPBTransitPaymentMethodSuggestionDetails *paymentMethodSuggestionDetails;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsPurpose:(id)a0;
- (void)addPaymentMethodIndex:(unsigned int)a0;
- (void)clearPaymentMethodIndexs;
- (unsigned int)paymentMethodIndexAtIndex:(unsigned long long)a0;
- (id)purposeAsString:(int)a0;
- (void)setPaymentMethodIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
