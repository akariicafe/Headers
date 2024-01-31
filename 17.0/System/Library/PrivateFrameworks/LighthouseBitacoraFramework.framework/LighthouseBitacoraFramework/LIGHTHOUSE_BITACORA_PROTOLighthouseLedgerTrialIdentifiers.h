@class LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers, LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExperimentIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) BOOL hasBmltIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers *bmltIdentifiers;

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
