@class NSOperationQueue;

@interface NMSKeepLocalRequestValidator : NSObject {
    unsigned long long _itemSize;
    NSOperationQueue *_validationQueue;
}

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0;
- (void)_continueWithOptions:(id)a0 validatorException:(unsigned long long)a1 cellularNetwork:(BOOL)a2 completion:(id /* block */)a3;
- (unsigned long long)_fetchSizeOfPendingDownloadsWithPowerConstraintCheck:(BOOL)a0;
- (void)_finishWithOptions:(id)a0 validatorException:(unsigned long long)a1 constraints:(unsigned long long)a2 error:(id)a3 completion:(id /* block */)a4;
- (id)_predicateForKeepLocalStatusDownloadingOrWaiting;
- (unsigned long long)_resolvedValidatorException:(unsigned long long)a0 options:(id)a1;
- (id)initWithItemSize:(unsigned long long)a0;
- (void)performWithOptions:(id)a0 completion:(id /* block */)a1;

@end
