@interface SPUIAppCompletion : SPUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (BOOL)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
