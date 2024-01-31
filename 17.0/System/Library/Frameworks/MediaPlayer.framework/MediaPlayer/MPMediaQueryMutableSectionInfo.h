@class NSArray;

@interface MPMediaQueryMutableSectionInfo : MPMediaQuerySectionInfo

@property (copy, nonatomic) NSArray *sectionIndexTitles;

- (void)addSectionWithHeaderTitle:(id)a0 sectionIndexTitleIndex:(unsigned long long)a1 count:(unsigned long long)a2;

@end
