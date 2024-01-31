@class NSString, CRNormalizedQuad;

@interface CRFormField : NSObject <CRFormFieldProviding>

@property (readonly) CRNormalizedQuad *boundingQuad;
@property (copy) CRNormalizedQuad *originalQuad;
@property unsigned long long fieldType;
@property unsigned long long fieldSource;
@property (copy) NSString *fieldValue;
@property unsigned long long maxCharacterCount;
@property (readonly) BOOL hasMoved;
@property unsigned long long textContentType;
@property double suggestedLineHeight;
@property BOOL hasBoundedWidth;
@property BOOL hasBoundedHeight;
@property BOOL autofillNewContextStart;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithQuad:(id)a0 type:(unsigned long long)a1 source:(unsigned long long)a2 value:(id)a3 contentType:(unsigned long long)a4 maxCharacterCount:(unsigned long long)a5;

@end
