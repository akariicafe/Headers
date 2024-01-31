@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAmenityValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_amenityId;
    NSMutableArray *_names;
    NSString *_symbolImageName;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _amenityType;
    BOOL _amenityPresent;
    struct { unsigned char has_amenityType : 1; unsigned char has_amenityPresent : 1; unsigned char read_unknownFields : 1; unsigned char read_amenityId : 1; unsigned char read_names : 1; unsigned char read_symbolImageName : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasAmenityType;
@property (nonatomic) int amenityType;
@property (nonatomic) BOOL hasAmenityPresent;
@property (nonatomic) BOOL amenityPresent;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) BOOL hasAmenityId;
@property (retain, nonatomic) NSString *amenityId;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasSymbolImageName;
@property (retain, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)nameType;

- (id)init;
- (unsigned long long)hash;
- (id)displayTitle;
- (BOOL)readFrom:(id)a0;
- (id)nameAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (void)clearNames;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addName:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (unsigned long long)namesCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsAmenityType:(id)a0;
- (id)amenityTypeAsString:(int)a0;

@end
