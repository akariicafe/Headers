@class NSString;

@interface TRITrialBMLTFields : PBCodable <NSCopying> {
    struct { unsigned char clientBmltTargetingRuleGroupOrdinal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientBmltId;
@property (retain, nonatomic) NSString *clientBmltId;
@property (readonly, nonatomic) BOOL hasClientBmltFactorPackSetId;
@property (retain, nonatomic) NSString *clientBmltFactorPackSetId;
@property (nonatomic) BOOL hasClientBmltTargetingRuleGroupOrdinal;
@property (nonatomic) int clientBmltTargetingRuleGroupOrdinal;

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
