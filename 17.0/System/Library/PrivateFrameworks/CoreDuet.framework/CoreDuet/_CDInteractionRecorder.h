@class _CDInteractionPolicies, NSXPCConnection;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
}

@property BOOL enforceDataLimits;
@property BOOL enforcePrivacy;

+ (id)interactionRecorder;

- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 domainIdentifier:(id)a1 error:(id *)a2;
- (BOOL)recordInteraction:(id)a0;
- (void)dealloc;
- (void)queryContactsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithBundleId:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 error:(id *)a1;
- (void)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithServiceName:(id)a0;
- (void)countContactsUsingPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 account:(id)a1 error:(id *)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)recordInteractions:(id)a0;
- (void)deleteInteractionsWithBundleId:(id)a0 account:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)countInteractionsUsingPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 domainIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteInteractionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (void)recordInteractions:(id)a0 completionHandler:(id /* block */)a1;
- (id)queryContactsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
- (unsigned long long)countContactsUsingPredicate:(id)a0 error:(id *)a1;
- (unsigned long long)deleteInteractionsWithBundleId:(id)a0 domainIdentifiers:(id)a1 error:(id *)a2;
- (unsigned long long)countInteractionsUsingPredicate:(id)a0 error:(id *)a1;
- (void)countContactsUsingPredicate:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)countInteractionsUsingPredicate:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteInteractionsMatchingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 account:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 domainIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithBundleId:(id)a0 synchronous:(BOOL)a1 domainIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryContactsUsingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)queryInteractionsUsingPredicate:(id)a0 synchronous:(BOOL)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)recordInteractions:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
