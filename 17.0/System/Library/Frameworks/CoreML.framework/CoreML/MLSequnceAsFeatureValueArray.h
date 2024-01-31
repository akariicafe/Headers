@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray

@property (readonly, nonatomic) MLSequence *sequence;

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWrappingSequence:(id)a0;

@end
