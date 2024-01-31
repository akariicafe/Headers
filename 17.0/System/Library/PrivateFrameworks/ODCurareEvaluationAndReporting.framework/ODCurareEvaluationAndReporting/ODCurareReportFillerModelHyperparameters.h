@interface ODCurareReportFillerModelHyperparameters : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _hyperparameterIndices;
    struct { float *list; unsigned long long count; unsigned long long size; } _hyperparameterValues;
}

@property (nonatomic) unsigned int versionNumber;
@property (readonly, nonatomic) unsigned long long hyperparameterIndicesCount;
@property (readonly, nonatomic) unsigned int *hyperparameterIndices;
@property (readonly, nonatomic) unsigned long long hyperparameterValuesCount;
@property (readonly, nonatomic) float *hyperparameterValues;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addHyperparameterIndices:(unsigned int)a0;
- (void)addHyperparameterValues:(float)a0;
- (void)setHyperparameterIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearHyperparameterIndices;
- (void)clearHyperparameterValues;
- (unsigned int)hyperparameterIndicesAtIndex:(unsigned long long)a0;
- (float)hyperparameterValuesAtIndex:(unsigned long long)a0;
- (void)setHyperparameterValues:(float *)a0 count:(unsigned long long)a1;

@end
