@class NSString, NSMutableArray;

@interface BLTPBBulletinSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) unsigned int destinations;
@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keyType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearKeys;
- (unsigned long long)keysCount;

@end
