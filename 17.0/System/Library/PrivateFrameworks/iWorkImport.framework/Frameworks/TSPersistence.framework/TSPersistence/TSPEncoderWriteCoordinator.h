@class NSString, TSPObjectContext, NSURL, TSURetainedPointerKeyDictionary, TSPArchiverManager, TSPReferenceOrderedSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, TSPEncoder, TSPEncoderWriteCoordinatorDelegate;

@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectWriting, TSPProxyObjectMapping> {
    id<TSPEncoder> _encoder;
    TSPArchiverManager *_archiverManager;
    id<TSPEncoderWriteCoordinatorDelegate> _delegate;
    _Atomic BOOL _didStopCapturingSnapshots;
    NSMutableArray *_dataFinalizeHandlers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPReferenceOrderedSet *_delayedObjects;
    BOOL _hasProxyObjects;
    TSURetainedPointerKeyDictionary *_proxyObjectMap;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *relativeURLForExternalData;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)proxyForReferencedObject:(id)a0;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id /* block */)a0;
- (void)archiverManager:(id)a0 didCreateArchiver:(id)a1;
- (BOOL)archiverManager:(id)a0 shouldDelayArchivingObject:(id)a1;
- (void)componentWriter:(id)a0 canSkipArchivingStronglyReferencedObject:(id)a1 fromComponentRootObject:(id)a2 completion:(id /* block */)a3;
- (BOOL)componentWriter:(id)a0 shouldDelayWritingObject:(id)a1;
- (id)componentWriter:(id)a0 wantsComponentOfObject:(id)a1 componentReadVersion:(unsigned long long *)a2;
- (id)componentWriter:(id)a0 wantsExplicitComponentRootObjectForObject:(id)a1 archiverOrNil:(id)a2 claimingComponent:(id)a3 hasArchiverAccessLock:(BOOL)a4;
- (id)componentWriterWantsDelayedObjects:(id)a0;
- (void)delayArchivingOfObject:(id)a0;
- (id)initWithEncoder:(id)a0 context:(id)a1 archiverClass:(Class)a2 delegate:(id)a3;
- (unsigned long long)objectTargetType;
- (unsigned long long)objectTargetTypeForComponentWriter:(id)a0;
- (void)setProxy:(id)a0 forReferencedObject:(id)a1;
- (BOOL)shouldDelayArchivingObject:(id)a0;
- (void)skipArchivingObject:(id)a0;
- (void)stopCapturingSnapshots;
- (void)willModifyObject:(id)a0 options:(unsigned long long)a1;
- (void)writeRootObject:(id)a0 completion:(id /* block */)a1;

@end
