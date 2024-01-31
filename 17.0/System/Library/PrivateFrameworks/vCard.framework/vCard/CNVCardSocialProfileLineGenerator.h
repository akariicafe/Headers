@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator

- (void)addCustomLabel:(id)a0 toLine:(id)a1;
- (void)addPrimaryValueMarkerToLine:(id)a0;
- (void)addStandardLabel:(id)a0 toLine:(id)a1;
- (BOOL)isStandardServiceName:(id)a0;
- (id)lineWithValue:(id)a0 label:(id)a1;

@end
