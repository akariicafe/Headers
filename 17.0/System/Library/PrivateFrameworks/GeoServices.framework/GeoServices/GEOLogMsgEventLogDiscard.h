@class NSData, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventLogDiscard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_certificates;
    NSData *_signature;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _trigger;
    struct { unsigned char has_trigger : 1; unsigned char read_certificates : 1; unsigned char read_signature : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *certificates;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;

+ (BOOL)isValid:(id)a0;
+ (Class)certificatesType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsTrigger:(id)a0;
- (void)addCertificates:(id)a0;
- (id)certificatesAtIndex:(unsigned long long)a0;
- (unsigned long long)certificatesCount;
- (void)clearCertificates;
- (id)triggerAsString:(int)a0;

@end
