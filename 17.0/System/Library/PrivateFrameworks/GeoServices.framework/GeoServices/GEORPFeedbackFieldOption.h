@class NSString, GEORPFeedbackFieldOptionAnnotations, NSMutableArray, PBDataReader;

@interface GEORPFeedbackFieldOption : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackFieldOptionAnnotations *_annotations;
    NSString *_defaultText;
    NSString *_localizedText;
    NSMutableArray *_tags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _key;
    struct { unsigned char has_key : 1; unsigned char read_annotations : 1; unsigned char read_defaultText : 1; unsigned char read_localizedText : 1; unsigned char read_tags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasKey;
@property (nonatomic) int key;
@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (readonly, nonatomic) BOOL hasDefaultText;
@property (retain, nonatomic) NSString *defaultText;
@property (retain, nonatomic) NSMutableArray *tags;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (retain, nonatomic) GEORPFeedbackFieldOptionAnnotations *annotations;

+ (Class)tagType;
+ (BOOL)isValid:(id)a0;

- (void)addTag:(id)a0;
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
- (int)StringAsKey:(id)a0;
- (void)clearTags;
- (id)keyAsString:(int)a0;
- (id)tagAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsCount;

@end
