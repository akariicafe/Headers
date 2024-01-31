@interface NPKProtoCheckPasscodePolicyComplianceRequest : PBRequest <NSCopying> {
    struct { unsigned char enforcedPolicy : 1; unsigned char applyBackgroundEnforcementIfNecessary : 1; unsigned char applyRestrictions : 1; } _has;
}

@property (nonatomic) BOOL hasEnforcedPolicy;
@property (nonatomic) int enforcedPolicy;
@property (nonatomic) BOOL hasApplyRestrictions;
@property (nonatomic) BOOL applyRestrictions;
@property (nonatomic) BOOL hasApplyBackgroundEnforcementIfNecessary;
@property (nonatomic) BOOL applyBackgroundEnforcementIfNecessary;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEnforcedPolicy:(id)a0;
- (id)enforcedPolicyAsString:(int)a0;

@end
