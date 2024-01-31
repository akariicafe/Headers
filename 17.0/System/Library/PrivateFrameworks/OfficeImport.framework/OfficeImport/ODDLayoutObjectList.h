@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)children;
- (id)init;
- (void).cxx_destruct;
- (void)addChild:(id)a0;

@end
