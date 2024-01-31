@class NSMutableArray;

@interface ACHCodableTemplateArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *templates;

+ (Class)templatesType;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (void)addTemplates:(id)a0;
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
- (id)initWithCodableTemplates:(id)a0;
- (unsigned long long)templatesCount;
- (void)clearTemplates;
- (id)templatesAtIndex:(unsigned long long)a0;

@end
