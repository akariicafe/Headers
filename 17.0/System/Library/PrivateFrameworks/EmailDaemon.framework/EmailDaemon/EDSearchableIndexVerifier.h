@class NSString, NSObject;
@protocol OS_os_log, OS_os_activity, EDSearchableIndexVerifierDataSource;

@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) NSObject<OS_os_activity> *indexVerificationActivity;
@property (weak, nonatomic) id<EDSearchableIndexVerifierDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void)verifyDataSamplesWithCompletionHandler:(id /* block */)a0 scheduler:(id)a1;
- (id)_failingSamples:(id)a0 tester:(id)a1;
- (unsigned long long)_findMissingTransactionIDs:(id)a0 dataSource:(id)a1;
- (id)initWithDataSource:(id)a0;
- (id)_verifySamples:(id)a0;
- (void).cxx_destruct;
- (id)_missingTransactionIDsFromTransactionIDs:(id)a0;
- (id)_verifyDataSamples:(id)a0;
- (void)_addFailingSamples:(id)a0 toResultDictionary:(id)a1;

@end
