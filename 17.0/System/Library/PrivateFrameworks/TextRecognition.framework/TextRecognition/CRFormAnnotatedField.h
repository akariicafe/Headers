@class NSString, CRNormalizedQuad;

@interface CRFormAnnotatedField : NSObject <CRFormFieldProviding>

@property (retain) CRNormalizedQuad *boundingQuad;
@property (copy) CRNormalizedQuad *originalQuad;
@property unsigned long long fieldType;
@property unsigned long long fieldSource;
@property (copy) NSString *fieldValue;
@property unsigned long long maxCharacterCount;
@property unsigned long long textContentType;
@property double suggestedLineHeight;
@property (readonly) BOOL hasBoundedWidth;
@property (readonly) BOOL hasBoundedHeight;
@property BOOL autofillNewContextStart;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentType:(unsigned long long)a0;
- (unsigned long long)contentType;
- (void).cxx_destruct;
- (id)quad;
- (void)setQuad:(id)a0;
- (id)initWithQuad:(id)a0 type:(unsigned long long)a1 source:(unsigned long long)a2 value:(id)a3 contentType:(unsigned long long)a4 maxCharacterCount:(unsigned long long)a5;

@end
