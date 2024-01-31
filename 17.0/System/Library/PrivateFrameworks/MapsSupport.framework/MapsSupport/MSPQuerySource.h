@class NSString, _MSPQueryState, NSHashTable, MSPContainer;

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {
    MSPContainer *_owningContainer;
    MSPQuerySource *_parentSource;
    id /* block */ _mappingBlock;
    id /* block */ _preprocessingBlock;
    NSHashTable *_observers;
    _MSPQueryState *_state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (void).cxx_destruct;
- (id)_container;
- (id)newQuery;
- (void)_didChangeSourceWithNewState:(id)a0 context:(id)a1 inContainer:(id)a2;
- (void)_didReceiveContainerContents:(id)a0 context:(id)a1;
- (id)_initWithOwningContainer:(id)a0;
- (id)_initWithParentSource:(id)a0 preprocessingBlock:(id /* block */)a1 mappingBlock:(id /* block */)a2;
- (void)container:(id)a0 didEditWithNewContents:(id)a1 orderedEdits:(id)a2 cause:(long long)a3 context:(id)a4;
- (id)newEditableQuery;
- (id)sourceByMappingContentsUsingBlock:(id /* block */)a0;
- (id)sourceByMappingContentsUsingPreprocessingBlock:(id /* block */)a0 mappingBlock:(id /* block */)a1;

@end
