@class NSString;

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly, nonatomic) BOOL shouldPerformAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (id)createActivity;
- (void)performAfterSavingRecords:(id /* block */)a0;

@end
