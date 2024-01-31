@interface _ExpandedMessageListCellLayoutValues : MessageListCellLayoutValues

- (double)topPadding;
- (double)defaultRowHeight;
- (long long)linesOfSummaryForCompactHeight:(BOOL)a0;
- (double)_heightWithNumberOfSummaryLines:(long long)a0;
- (id)addressFont;
- (id)backgroundColorForSelectedState:(unsigned long long)a0 disclosureEnabled:(BOOL)a1;
- (BOOL)isSubjectVisible;
- (id)subjectFont;

@end
