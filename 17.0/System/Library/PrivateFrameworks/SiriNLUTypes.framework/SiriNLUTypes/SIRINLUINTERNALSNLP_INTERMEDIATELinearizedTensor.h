@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numericalizedFeatures;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _shapes;
}

@property (readonly, nonatomic) unsigned long long shapesCount;
@property (readonly, nonatomic) unsigned int *shapes;
@property (readonly, nonatomic) unsigned long long numericalizedFeaturesCount;
@property (readonly, nonatomic) unsigned int *numericalizedFeatures;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featureType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addShape:(unsigned int)a0;
- (id)featureAtIndex:(unsigned long long)a0;
- (void)addFeature:(id)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (void)setNumericalizedFeatures:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addNumericalizedFeature:(unsigned int)a0;
- (void)clearNumericalizedFeatures;
- (void)clearShapes;
- (unsigned int)numericalizedFeatureAtIndex:(unsigned long long)a0;
- (void)setShapes:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)shapeAtIndex:(unsigned long long)a0;

@end
