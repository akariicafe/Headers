@class TSURetainedPointerKeyDictionary;

@interface TSULayerSaveRestore : NSObject

@property (retain, nonatomic) TSURetainedPointerKeyDictionary *layerStates;

- (void)dealloc;
- (id)objectForLayer:(id)a0 key:(id)a1;
- (BOOL)restoreLayer:(id)a0;
- (void)saveLayer:(id)a0;

@end
