@interface EDStylesCollection : EDCollection {
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (id)init;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)addObject:(id)a0;
- (id)defaultWorkbookStyle;
- (unsigned long long)defaultWorkbookStyleIndex;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)a0;

@end
