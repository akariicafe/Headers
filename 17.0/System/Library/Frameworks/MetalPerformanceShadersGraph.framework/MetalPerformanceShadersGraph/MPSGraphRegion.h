@class NSMutableArray, MPSGraphOperation;

@interface MPSGraphRegion : MPSGraphObject {
    NSMutableArray *_blocks;
    MPSGraphOperation *_parentOp;
}

- (id)init;
- (void).cxx_destruct;
- (id)appendNewBlock;

@end
