@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_listResultItems;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _listType;
    struct { unsigned char has_listType : 1; unsigned char read_listResultItems : 1; unsigned char read_searchString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *listResultItems;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;

+ (BOOL)isValid:(id)a0;
+ (Class)listResultItemType;

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
- (int)StringAsListType:(id)a0;
- (void)addListResultItem:(id)a0;
- (void)clearListResultItems;
- (id)listResultItemAtIndex:(unsigned long long)a0;
- (unsigned long long)listResultItemsCount;
- (id)listTypeAsString:(int)a0;

@end
