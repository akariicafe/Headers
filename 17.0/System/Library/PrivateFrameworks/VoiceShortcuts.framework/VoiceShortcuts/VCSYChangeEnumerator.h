@class NSEnumerator;

@interface VCSYChangeEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    unsigned long long _count;
    unsigned long long _index;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithLazyArray:(id)a0;

@end
