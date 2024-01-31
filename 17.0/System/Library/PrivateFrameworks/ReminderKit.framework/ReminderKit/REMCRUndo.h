@class NSArray;

@interface REMCRUndo : NSObject

@property (readonly, nonatomic) NSArray *undoBlocks;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUndoBlocks:(id)a0;

@end
