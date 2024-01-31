@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BRShareOperation {
    CKRecordID *_recordID;
    BOOL _withServerLookup;
}

@property (copy) id /* block */ copyDocumentURLCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0 fileURL:(id)a1 withServerLookup:(BOOL)a2;
- (id)initWithRecordID:(id)a0 withServerLookup:(BOOL)a1;

@end
