@interface NSMapObservationTransformer : NSObservationTransformer {
    id _block;
    int _tag;
}

- (void)dealloc;
- (void)_receiveBox:(id)a0;
- (id)initWithBlock:(id)a0 tag:(int)a1;

@end
