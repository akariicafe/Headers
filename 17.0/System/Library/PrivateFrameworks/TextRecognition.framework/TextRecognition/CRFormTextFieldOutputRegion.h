@interface CRFormTextFieldOutputRegion : CRFormFieldOutputRegion

@property (readonly) unsigned long long textContentType;
@property (readonly) unsigned long long maxCharacterCount;
@property (readonly) double suggestedLineHeight;
@property (readonly) BOOL autofillNewContextStart;

- (void)setTextContentType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fieldType;
- (void)setMaxCharacterCount:(unsigned long long)a0;
- (void)setAutofillNewContextStart:(BOOL)a0;
- (void)setSuggestedLineHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithQuad:(id)a0 labelRegion:(id)a1 subFields:(id)a2 contentType:(unsigned long long)a3 source:(unsigned long long)a4;
- (id)initWithQuad:(id)a0 labelRegion:(id)a1 subFields:(id)a2 contentType:(unsigned long long)a3 source:(unsigned long long)a4 hasBoundedWidth:(BOOL)a5 hasBoundedHeight:(BOOL)a6;

@end
