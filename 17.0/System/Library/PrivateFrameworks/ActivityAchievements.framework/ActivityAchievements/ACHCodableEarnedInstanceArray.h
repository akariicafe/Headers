@class NSMutableArray;

@interface ACHCodableEarnedInstanceArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *earnedInstances;

+ (Class)earnedInstancesType;

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearEarnedInstances;
- (void)writeTo:(id)a0;
- (unsigned long long)earnedInstancesCount;
- (id)earnedInstancesAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addEarnedInstances:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodableEarnedInstances:(id)a0;

@end
