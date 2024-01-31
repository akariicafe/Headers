@class NSDictionary, NSArray;

@interface PFStoryConcreteTransitionTable : NSObject <PFStoryTransitionTable> {
    NSDictionary *_transitionsByColorGrade;
    NSArray *_defaultFrequencies;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTransitionsByColorGrade:(id)a0 defaultFrequencies:(id)a1;
- (id)transitionsForColorGrade:(id)a0 songPace:(long long)a1;

@end
