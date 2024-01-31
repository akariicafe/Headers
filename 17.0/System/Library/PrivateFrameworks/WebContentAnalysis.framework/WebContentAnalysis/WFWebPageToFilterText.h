@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)URLFuzzyWithWordLength:(int)a0;
- (id)URLFuzzyForFilter;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)a0 message:(id *)a1;
- (id)rawPlainText;
- (BOOL)selfRestricted;

@end
