@class NSString;
@protocol WFOSAScriptEditorParameterDelegate;

@interface WFOSAScriptEditorParameter : WFParameter

@property (readonly, nonatomic) NSString *languageName;
@property (weak, nonatomic) id<WFOSAScriptEditorParameterDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
