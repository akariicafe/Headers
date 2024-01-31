@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (id)init;
- (id)rootNode;
- (id)description;
- (void).cxx_destruct;

@end
