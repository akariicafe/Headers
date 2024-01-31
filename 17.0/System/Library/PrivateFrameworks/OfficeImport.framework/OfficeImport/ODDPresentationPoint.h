@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (void)setType:(int)a0;
- (id)children;
- (id)parent;
- (void).cxx_destruct;
- (void)addChild:(id)a0 order:(unsigned long long)a1;

@end
