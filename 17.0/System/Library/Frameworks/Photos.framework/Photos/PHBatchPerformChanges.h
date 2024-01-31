@class PHPhotoLibrary;

@interface PHBatchPerformChanges : NSObject {
    PHPhotoLibrary *_library;
    unsigned long long _itemCount;
    unsigned long long _batchSize;
    id /* block */ _batchBlock;
}

- (void).cxx_destruct;
- (BOOL)_addBatchRangeAtIndex:(unsigned long long)a0 toOutError:(id *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_batchRangeAtIndex:(unsigned long long)a0;
- (id)_errorByAddingBatchRangeAtIndex:(unsigned long long)a0 tofError:(id)a1;
- (BOOL)_hasMoreBatchesAtIndex:(unsigned long long)a0;
- (unsigned long long)_performBatchAtIndex:(unsigned long long)a0;
- (unsigned long long)_performBatchAtIndexAndWait:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_performChangesAndWaitStartingAtIndex:(unsigned long long)a0 error:(id *)a1;
- (void)_performChangesStartingAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_performNextBatchAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 itemCount:(unsigned long long)a1 batchSize:(unsigned long long)a2 batchBlock:(id /* block */)a3;
- (BOOL)performChangesAndWait:(id *)a0;
- (void)performChangesWithCompletionHandler:(id /* block */)a0;

@end
