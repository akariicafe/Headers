@class SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules, NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMExecutedHandcraftedRules : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRules;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;

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
