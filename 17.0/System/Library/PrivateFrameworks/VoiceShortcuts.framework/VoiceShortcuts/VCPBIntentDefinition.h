@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFiles:(id)a0;
- (void)clearFiles;
- (id)filesAtIndex:(unsigned long long)a0;
- (unsigned long long)filesCount;

@end
