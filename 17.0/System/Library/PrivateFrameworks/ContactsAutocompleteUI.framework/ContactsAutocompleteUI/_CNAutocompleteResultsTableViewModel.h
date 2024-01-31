@class NSMutableDictionary;

@interface _CNAutocompleteResultsTableViewModel : NSObject {
    NSMutableDictionary *_sections;
}

@property (nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) unsigned long long numberOfNonEmptySections;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)computeDiffForModel:(id)a0;
- (void)enumerateSections:(id /* block */)a0;
- (id)initWithNumberOfSections:(unsigned long long)a0;
- (void)setSection:(id)a0 atIndex:(unsigned long long)a1;

@end
