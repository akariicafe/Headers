@interface SwiftData.ModelContext : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _container;
    void /* unknown type, empty encoding */ _nsContext;
    void /* unknown type, empty encoding */ _runLoopObserver;
    void /* unknown type, empty encoding */ undoManager;
    void /* unknown type, empty encoding */ _hasChanges;
    void /* unknown type, empty encoding */ _hasUnprocessedInserts;
    void /* unknown type, empty encoding */ _unprocessedChangesPending;
    void /* unknown type, empty encoding */ _hasUnprocessedDeletes;
    void /* unknown type, empty encoding */ _hasInserts;
    void /* unknown type, empty encoding */ _hasUpdates;
    void /* unknown type, empty encoding */ _hasDeletes;
    void /* unknown type, empty encoding */ _exhaustiveValidation;
    void /* unknown type, empty encoding */ _propagatesDeletesAtEndOfEvent;
    void /* unknown type, empty encoding */ _generatedMutatedIDsNotification;
    void /* unknown type, empty encoding */ _registeredForCallback;
    void /* unknown type, empty encoding */ _processingChanges;
    void /* unknown type, empty encoding */ _ignoreUndoCheckpoints;
    void /* unknown type, empty encoding */ _propagatingDeletes;
    void /* unknown type, empty encoding */ _tombstonedObjectIDs;
    void /* unknown type, empty encoding */ _insertedObjects;
    void /* unknown type, empty encoding */ _unprocessedInserts;
    void /* unknown type, empty encoding */ _changedObjects;
    void /* unknown type, empty encoding */ _unprocessedChanges;
    void /* unknown type, empty encoding */ _deletedObjects;
    void /* unknown type, empty encoding */ _unprocessedDeletes;
    void /* unknown type, empty encoding */ _refreshedObjects;
    void /* unknown type, empty encoding */ _lockedObjects;
    void /* unknown type, empty encoding */ _deferredInsertsPendingNotification;
    void /* unknown type, empty encoding */ _deferredMergeChangesNotification;
    void /* unknown type, empty encoding */ _undoTransactionID;
    void /* unknown type, empty encoding */ _registeredUndoTransactionID;
    void /* unknown type, empty encoding */ _ignoreChangeNotification;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ hasAutosaveObservers;
    void /* unknown type, empty encoding */ MAX_TIME;
    void /* unknown type, empty encoding */ contextChanged;
    void /* unknown type, empty encoding */ firstAutosaveTimerCheck;
    void /* unknown type, empty encoding */ autosaveEnabled;
    void /* unknown type, empty encoding */ objectRegistration;
}

- (void)_undoDeletions:(id)a0;
- (void)_clearChangedThisTransaction:(id)a0;
- (void)_undoDeletionsMovedToUpdates:(id)a0;
- (void)_undoInsertions:(id)a0;
- (void)_undoManagerCheckpoint:(id)a0;
- (void)_undoUpdates:(id)a0;
- (void)autosave;
- (void)_observeNSContextChanges:(id)a0;
- (void)_processChangedManagedObjectIDs:(id)a0;
- (void)_observeContainerChanges:(id)a0;
- (void)checkAutosaveConditionsWithDelay:(double)a0;

@end
