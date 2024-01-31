@class NSString;

@interface GEOLogMsgEventPlaceCacheLookup : PBCodable <NSCopying> {
    unsigned long long _businessId;
    NSString *_requestAppIdentifier;
    unsigned int _bytes;
    int _localSearchProviderID;
    int _lookupResult;
    struct { unsigned char has_businessId : 1; unsigned char has_bytes : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_lookupResult : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) unsigned int bytes;
@property (nonatomic) BOOL hasLookupResult;
@property (nonatomic) int lookupResult;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
- (int)StringAsLookupResult:(id)a0;
- (id)lookupResultAsString:(int)a0;

@end
