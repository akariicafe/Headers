@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse, SIRINLUINTERNALLVCOverrideValue;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;
@property (readonly, nonatomic) BOOL hasLvcOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;

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
