@class NSArray, NSMutableArray, NSMutableSet;

@interface _MSPContainerEditsRecorder : NSObject {
    NSMutableArray *_originalMutableArray;
    NSMutableArray *_orderedEdits;
    NSMutableSet *_updatedObjects;
}

@property (readonly, nonatomic) NSMutableArray *recordableMutableArray;
@property (readonly, nonatomic) NSArray *orderedEdits;

- (void).cxx_destruct;
- (void)_mutableObjectContentDidUpdate:(id)a0;
- (void)removeEditableObjectsAtIndexes:(id)a0;
- (id)objectInEditableObjectsAtIndex:(unsigned long long)a0;
- (void)_editDetectorDidDetectUpdateForObject:(id)a0;
- (unsigned long long)countOfEditableObjects;
- (id)editableObjectsAtIndexes:(id)a0;
- (void)getEditableObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithMutableArray:(id)a0;
- (void)insertEditableObjects:(id)a0 atIndexes:(id)a1;
- (void)insertObject:(id)a0 inEditableObjectsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)a0;
- (void)replaceEditableObjectsAtIndexes:(id)a0 withEditableObjects:(id)a1;
- (void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)useImmutableObjectsForEditsFromMap:(id)a0 intermediateMutableObjectTransferBlock:(id /* block */)a1;

@end
