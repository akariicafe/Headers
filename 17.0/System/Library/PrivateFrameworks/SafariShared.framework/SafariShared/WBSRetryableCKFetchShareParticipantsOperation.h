@class NSArray;

@interface WBSRetryableCKFetchShareParticipantsOperation : WBSRetryableCKOperation

@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock;

- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
