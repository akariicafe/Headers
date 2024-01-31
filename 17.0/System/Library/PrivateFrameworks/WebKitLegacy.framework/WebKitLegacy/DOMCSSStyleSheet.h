@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule *ownerRule;
@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMCSSRuleList *rules;

- (void)removeRule:(unsigned int)a0;
- (int)addRule:(id)a0 style:(id)a1 index:(unsigned int)a2;
- (void)deleteRule:(unsigned int)a0;
- (unsigned int)insertRule:(id)a0 :(unsigned int)a1;
- (unsigned int)insertRule:(id)a0 index:(unsigned int)a1;

@end
