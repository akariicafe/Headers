@class mutationsPtr, MFEmailSet;

@interface _MFEmailSetEnumerator : NSEnumerator {
    MFEmailSet *_set;
    struct { unsigned long long state; mutationsPtr **itemsPtr; unsigned long long *x0; unsigned long long extra[5]; } _state;
}

- (id)initWithSet:(id)a0;
- (void)dealloc;
- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
