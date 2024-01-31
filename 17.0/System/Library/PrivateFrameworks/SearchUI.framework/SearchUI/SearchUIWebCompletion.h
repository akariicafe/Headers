@interface SearchUIWebCompletion : SearchUICompletion

+ (BOOL)cardSectionIsWeb:(id)a0;
+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (BOOL)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;

@end
