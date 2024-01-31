@class NSString;

@interface TRITrialOnDemandFactorFields : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFactorName;
@property (retain, nonatomic) NSString *factorName;
@property (readonly, nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSString *namespaceName;

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
