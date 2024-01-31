@class NSEnumerator, NSDictionary, NSArray;

@interface MLProbabilityDictionarySharedKeySet : NSObject {
    NSDictionary *_labelToIndex;
    NSArray *_labels;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long uniqueLabelCount;
@property (readonly, nonatomic) NSEnumerator *labelEnumerator;

- (void).cxx_destruct;
- (id)labelAtIndex:(unsigned long long)a0;
- (id)initWithLabels:(id)a0;
- (unsigned long long)indexOfLabel:(id)a0;

@end
