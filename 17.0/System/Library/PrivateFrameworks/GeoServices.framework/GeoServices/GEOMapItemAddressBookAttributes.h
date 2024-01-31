@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressIdentifier;
    NSString *_contactIdentifier;
    NSString *_name;
    NSString *_spokenName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _addressType;
    BOOL _isMe;
    struct { unsigned char has_addressType : 1; unsigned char has_isMe : 1; unsigned char read_unknownFields : 1; unsigned char read_addressIdentifier : 1; unsigned char read_contactIdentifier : 1; unsigned char read_name : 1; unsigned char read_spokenName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasAddressType;
@property (nonatomic) int addressType;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSpokenName;
@property (retain, nonatomic) NSString *spokenName;
@property (nonatomic) BOOL hasIsMe;
@property (nonatomic) BOOL isMe;
@property (readonly, nonatomic) BOOL hasAddressIdentifier;
@property (retain, nonatomic) NSString *addressIdentifier;
@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
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
- (int)StringAsAddressType:(id)a0;
- (id)addressTypeAsString:(int)a0;

@end
