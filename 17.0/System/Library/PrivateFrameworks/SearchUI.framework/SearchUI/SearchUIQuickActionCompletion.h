@interface SearchUIQuickActionCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (BOOL)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)prefixMatchExtensionString;

@end
