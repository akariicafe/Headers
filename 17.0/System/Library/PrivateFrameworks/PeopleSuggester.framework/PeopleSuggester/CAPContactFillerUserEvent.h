@interface CAPContactFillerUserEvent : PBCodable <NSCopying> {
    struct { unsigned char highConfidenceRuleCount : 1; unsigned char lowConfidenceRuleCount : 1; unsigned char mediumConfidenceRuleCount : 1; } _has;
}

@property (nonatomic) unsigned int textInteractionsSent;
@property (nonatomic) unsigned int textInteractionsReceived;
@property (nonatomic) unsigned int shareInteractionsSent;
@property (nonatomic) BOOL hasHighConfidenceRuleCount;
@property (nonatomic) unsigned int highConfidenceRuleCount;
@property (nonatomic) BOOL hasMediumConfidenceRuleCount;
@property (nonatomic) unsigned int mediumConfidenceRuleCount;
@property (nonatomic) BOOL hasLowConfidenceRuleCount;
@property (nonatomic) unsigned int lowConfidenceRuleCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
