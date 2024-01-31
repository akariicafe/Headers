@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks;

- (id)init;
- (id)immutableCopy;
- (void).cxx_destruct;
- (void)addUndoBlock:(id /* block */)a0;

@end
