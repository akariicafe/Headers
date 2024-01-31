@class NSString, CKRecordID, NSError;

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantDocumentToken;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    BOOL _iWorkShareable;
    BOOL _isChildOfShare;
    BOOL _shouldFetchParticipantDocumentToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)a0;
- (void)_completeWithResult:(id)a0 participantKey:(id)a1;
- (void)_fetchBaseTokenWithCompletion:(id /* block */)a0;
- (void)_fetchParticipantDocumentTokenWithCompletion:(id /* block */)a0;
- (void)_fetchParticipantKeyWithCompletion:(id /* block */)a0;

@end
