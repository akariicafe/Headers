@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_publisherAttributionFiles;
    NSMutableDictionary *_publisherToFileIndex;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_publisherAttributionFiles : 1; unsigned char read_publisherToFileIndex : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *publisherAttributionFiles;
@property (retain, nonatomic) NSMutableDictionary *publisherToFileIndex;

+ (BOOL)isValid:(id)a0;
+ (Class)publisherAttributionFilesType;
+ (Class)publisherToFileIndexType;

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
- (void)addPublisherAttributionFiles:(id)a0;
- (void)clearPublisherAttributionFiles;
- (void)clearPublisherToFileIndex;
- (void)enumeratePublisherToFileIndexUsingBlock:(id /* block */)a0;
- (id)publisherAttributionFilesAtIndex:(unsigned long long)a0;
- (unsigned long long)publisherAttributionFilesCount;
- (unsigned long long)publisherToFileIndexCount;
- (unsigned int)publisherToFileIndexForKey:(id)a0;
- (void)setPublisherToFileIndexValue:(unsigned int)a0 forKey:(id)a1;

@end
