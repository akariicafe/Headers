@class TSPPackageReadCoordinator, NSObject, TSPPackage;
@protocol OS_dispatch_queue;

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {
    TSPPackage *_documentPackage;
    TSPPackageReadCoordinator *_documentPackageReadCoordinator;
    NSObject<OS_dispatch_queue> *_documentComponentReadQueue;
}

- (void).cxx_destruct;
- (id)externalObjectForIdentifier:(long long)a0 componentIdentifier:(long long)a1 isReadFinished:(BOOL)a2;
- (BOOL)endReading;
- (id)initWithContext:(id)a0 package:(id)a1 packageURL:(id)a2 finalizeHandlerQueue:(id)a3 areExternalDataReferencesAllowed:(BOOL)a4 skipDocumentUpgrade:(BOOL)a5 documentLoadValidationPolicy:(id)a6;
- (id)initWithContext:(id)a0 package:(id)a1 packageURL:(id)a2 finalizeHandlerQueue:(id)a3 areExternalDataReferencesAllowed:(BOOL)a4 skipDocumentUpgrade:(BOOL)a5 documentLoadValidationPolicy:(id)a6 documentPackage:(id)a7;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)a0 forObjectIdentifier:(long long)a1 isWeakReference:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setDocumentPackageReadCoordinator:(id)a0;

@end
