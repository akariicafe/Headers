@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedName : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    NSString *_nameType;
    NSString *_name;
    NSString *_phoneticName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _nameRank;
    BOOL _isDefault;
    struct { unsigned char has_nameRank : 1; unsigned char has_isDefault : 1; unsigned char read_unknownFields : 1; unsigned char read_languageCode : 1; unsigned char read_nameType : 1; unsigned char read_name : 1; unsigned char read_phoneticName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIsDefault;
@property (nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasNameType;
@property (retain, nonatomic) NSString *nameType;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasNameRank;
@property (nonatomic) unsigned int nameRank;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (retain, nonatomic) NSString *phoneticName;
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
- (id)initWithPlaceDataLocalizedString:(id)a0;

@end
