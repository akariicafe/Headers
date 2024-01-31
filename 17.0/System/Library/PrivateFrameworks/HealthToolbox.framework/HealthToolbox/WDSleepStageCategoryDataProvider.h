@interface WDSleepStageCategoryDataProvider : WDSampleListDataProvider

- (unsigned long long)numberOfSections;
- (id)sampleTypes;
- (long long)cellStyle;
- (id)_durationFormatter;
- (id)titleForSection:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)_anySample;
- (id)_sleepSampleAtIndex:(unsigned long long)a0 section:(unsigned long long)a1;
- (void)deleteObjectsAtIndexPath:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;

@end
