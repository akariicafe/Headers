@class NSString;

@interface CDMShortcutPhrase : NSObject

@property (readonly, nonatomic) NSString *semanticValue;
@property (readonly, nonatomic) NSString *baseTemplateString;

- (void).cxx_destruct;
- (id)initWithSemanticValue:(id)a0;
- (id)initWithSemanticValue:(id)a0 baseTemplateString:(id)a1;

@end
