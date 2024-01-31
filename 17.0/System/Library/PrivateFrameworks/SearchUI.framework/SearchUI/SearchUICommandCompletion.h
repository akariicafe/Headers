@interface SearchUICommandCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (BOOL)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)command;
- (void)updateFields;
- (id)prefixMatchExtensionString;

@end
