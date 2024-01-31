@interface PXSearchRecentSearchesGadgetProvider : PXGadgetProvider

- (id)init;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
