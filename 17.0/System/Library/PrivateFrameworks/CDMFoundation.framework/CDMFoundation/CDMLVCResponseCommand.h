@class SIRINLUINTERNALITFMITFMParserResponse, SIRINLUEXTERNALLanguageVariantResult;

@interface CDMLVCResponseCommand : CDMBaseCommand

@property int classLabel;
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *itfmResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;

- (id)description;
- (void).cxx_destruct;
- (id)initWithITFMResponse:(id)a0 languageVariantResult:(id)a1;

@end
