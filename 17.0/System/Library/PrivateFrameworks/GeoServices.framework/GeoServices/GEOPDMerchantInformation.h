@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDMerchantInformation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantAdditionalData;
    NSString *_merchantAddress;
    NSString *_merchantCanl;
    NSString *_merchantCity;
    NSString *_merchantCountryCode;
    NSString *_merchantDoingBusinessAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantId;
    NSString *_merchantRawAddress;
    NSString *_merchantRawCity;
    NSString *_merchantRawState;
    NSString *_merchantState;
    NSString *_merchantType;
    NSString *_merchantZip;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _merchantCleanConfidenceLevel;
    struct { unsigned char has_merchantCleanConfidenceLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_merchantAdditionalData : 1; unsigned char read_merchantAddress : 1; unsigned char read_merchantCanl : 1; unsigned char read_merchantCity : 1; unsigned char read_merchantCountryCode : 1; unsigned char read_merchantDoingBusinessAsName : 1; unsigned char read_merchantEnhancedName : 1; unsigned char read_merchantId : 1; unsigned char read_merchantRawAddress : 1; unsigned char read_merchantRawCity : 1; unsigned char read_merchantRawState : 1; unsigned char read_merchantState : 1; unsigned char read_merchantType : 1; unsigned char read_merchantZip : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
@property (readonly, nonatomic) BOOL hasMerchantDoingBusinessAsName;
@property (retain, nonatomic) NSString *merchantDoingBusinessAsName;
@property (readonly, nonatomic) BOOL hasMerchantEnhancedName;
@property (retain, nonatomic) NSString *merchantEnhancedName;
@property (readonly, nonatomic) BOOL hasMerchantCity;
@property (retain, nonatomic) NSString *merchantCity;
@property (readonly, nonatomic) BOOL hasMerchantRawCity;
@property (retain, nonatomic) NSString *merchantRawCity;
@property (readonly, nonatomic) BOOL hasMerchantState;
@property (retain, nonatomic) NSString *merchantState;
@property (readonly, nonatomic) BOOL hasMerchantRawState;
@property (retain, nonatomic) NSString *merchantRawState;
@property (readonly, nonatomic) BOOL hasMerchantZip;
@property (retain, nonatomic) NSString *merchantZip;
@property (readonly, nonatomic) BOOL hasMerchantAddress;
@property (retain, nonatomic) NSString *merchantAddress;
@property (readonly, nonatomic) BOOL hasMerchantRawAddress;
@property (retain, nonatomic) NSString *merchantRawAddress;
@property (readonly, nonatomic) BOOL hasMerchantCountryCode;
@property (retain, nonatomic) NSString *merchantCountryCode;
@property (readonly, nonatomic) BOOL hasMerchantType;
@property (retain, nonatomic) NSString *merchantType;
@property (nonatomic) BOOL hasMerchantCleanConfidenceLevel;
@property (nonatomic) int merchantCleanConfidenceLevel;
@property (readonly, nonatomic) BOOL hasMerchantAdditionalData;
@property (retain, nonatomic) NSString *merchantAdditionalData;
@property (readonly, nonatomic) BOOL hasMerchantCanl;
@property (retain, nonatomic) NSString *merchantCanl;
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

@end
