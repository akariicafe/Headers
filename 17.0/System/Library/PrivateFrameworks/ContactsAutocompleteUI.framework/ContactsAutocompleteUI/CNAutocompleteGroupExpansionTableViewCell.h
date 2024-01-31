@interface CNAutocompleteGroupExpansionTableViewCell : CNComposeRecipientTableViewCell

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canCollapseRecipient;
- (BOOL)canExpandRecipient;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
