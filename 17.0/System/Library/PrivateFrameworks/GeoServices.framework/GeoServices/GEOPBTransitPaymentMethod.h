@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitPaymentMethod : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    unsigned long long _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _addValueName;
    int _paymentMethodType;
    struct { unsigned char has_muid : 1; unsigned char has_addValueName : 1; unsigned char has_paymentMethodType : 1; unsigned char read_unknownFields : 1; unsigned char read_identifier : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasPaymentMethodType;
@property (nonatomic) int paymentMethodType;
@property (nonatomic) BOOL hasAddValueName;
@property (nonatomic) int addValueName;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsAddValueName:(id)a0;
- (int)StringAsPaymentMethodType:(id)a0;
- (id)addValueNameAsString:(int)a0;
- (id)paymentMethodTypeAsString:(int)a0;

@end
