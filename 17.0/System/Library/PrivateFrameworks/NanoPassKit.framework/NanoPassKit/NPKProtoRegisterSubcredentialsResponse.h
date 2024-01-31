@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *passesDatas;
@property (retain, nonatomic) NSMutableArray *errorsDatas;

+ (Class)errorsDataType;
+ (Class)passesDataType;

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
- (void)addErrorsData:(id)a0;
- (void)addPassesData:(id)a0;
- (void)clearErrorsDatas;
- (void)clearPassesDatas;
- (id)errorsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsDatasCount;
- (id)passesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)passesDatasCount;

@end
