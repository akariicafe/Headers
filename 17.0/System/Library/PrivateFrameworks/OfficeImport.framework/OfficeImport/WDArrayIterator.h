@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)next;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)hasNext;

@end
