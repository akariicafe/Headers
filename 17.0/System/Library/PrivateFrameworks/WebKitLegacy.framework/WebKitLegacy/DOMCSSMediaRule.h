@class DOMCSSRuleList, DOMMediaList;

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSRuleList *cssRules;

- (void)deleteRule:(unsigned int)a0;
- (unsigned int)insertRule:(id)a0 :(unsigned int)a1;
- (unsigned int)insertRule:(id)a0 index:(unsigned int)a1;

@end
