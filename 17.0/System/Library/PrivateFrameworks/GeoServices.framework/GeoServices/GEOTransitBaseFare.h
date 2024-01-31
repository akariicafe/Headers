@class NSDecimalNumber, NSString, NSArray, GEOTransitPrice, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _supportedPaymentMethodIndexs;
    GEOTransitPrice *_price;
    NSMutableArray *_supportedPaymentMethods;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numberOfLegs;
    int _paymentType;
    BOOL _cashOnly;
    struct { unsigned char has_numberOfLegs : 1; unsigned char has_paymentType : 1; unsigned char has_cashOnly : 1; unsigned char read_unknownFields : 1; unsigned char read_supportedPaymentMethodIndexs : 1; unsigned char read_price : 1; unsigned char read_supportedPaymentMethods : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSDecimalNumber *value;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *supportedICCardProviders;
@property (readonly, nonatomic) unsigned long long supportedPaymentMethodIndexsCount;
@property (readonly, nonatomic) unsigned int *supportedPaymentMethodIndexs;
@property (readonly, nonatomic) BOOL cashOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPrice;
@property (retain, nonatomic) GEOTransitPrice *price;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (retain, nonatomic) NSMutableArray *supportedPaymentMethods;
@property (nonatomic) BOOL hasCashOnly;
@property (nonatomic) BOOL cashOnly;
@property (readonly, nonatomic) unsigned long long supportedPaymentMethodIndexsCount;
@property (readonly, nonatomic) unsigned int *supportedPaymentMethodIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)supportedPaymentMethodType;

- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)paymentTypeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsPaymentType:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addSupportedPaymentMethodIndex:(unsigned int)a0;
- (void)addSupportedPaymentMethod:(id)a0;
- (void)clearSupportedPaymentMethodIndexs;
- (void)clearSupportedPaymentMethods;
- (void)setSupportedPaymentMethodIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)supportedPaymentMethodAtIndex:(unsigned long long)a0;
- (unsigned int)supportedPaymentMethodIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedPaymentMethodsCount;

@end
