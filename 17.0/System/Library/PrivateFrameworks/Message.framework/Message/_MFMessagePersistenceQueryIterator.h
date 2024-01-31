@class NSString, NSMutableIndexSet;

@interface _MFMessagePersistenceQueryIterator : EDPersistedMessageQueryIterator <MFSearchResultHandler, QueryProgressMonitor, _MFFlushableMessageSetIterator, EFCancelable>

@property (retain, nonatomic) NSMutableIndexSet *messageSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleMessage:(id)a0;
- (void).cxx_destruct;

@end
