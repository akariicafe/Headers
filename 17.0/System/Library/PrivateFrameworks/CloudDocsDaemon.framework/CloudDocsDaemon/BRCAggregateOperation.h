@class NSString, NSArray, NSMutableDictionary;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
}

@property (copy, nonatomic) id /* block */ wrapperOperationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithSyncContext:(id)a0 subOperations:(id)a1;

@end
