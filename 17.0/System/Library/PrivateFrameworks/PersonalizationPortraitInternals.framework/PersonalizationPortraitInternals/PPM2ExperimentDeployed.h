@class NSString;

@interface PPM2ExperimentDeployed : PBCodable <NSCopying> {
    struct { unsigned char delay : 1; } _has;
}

@property (nonatomic) BOOL hasDelay;
@property (nonatomic) unsigned int delay;
@property (readonly, nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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

@end
