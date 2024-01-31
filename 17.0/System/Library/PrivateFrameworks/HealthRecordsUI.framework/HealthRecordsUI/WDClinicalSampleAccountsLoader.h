@class NSArray, HRProfile;

@interface WDClinicalSampleAccountsLoader : NSObject

@property (copy, nonatomic) NSArray *cachedAccounts;
@property (retain, nonatomic) HRProfile *profile;
@property (copy, nonatomic) NSArray *accountDataBatches;

+ (id)knownAccountFiles;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_createAccountAndTriggerIngestForDataBatch:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (id)_createTemporaryFileForDataBatch:(id)a0 error:(id *)a1;
- (id)_parseAccounts;
- (id)_sampleAccountForGatewayWithExternalID:(id)a0 error:(id *)a1;
- (BOOL)_triggerIngestOfDataBatch:(id)a0 accountIdentifier:(id)a1 error:(id *)a2;
- (void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)a0 completion:(id /* block */)a1;
- (id)providerForSampleDataSearchResultWithExternalID:(id)a0 error:(id *)a1;
- (id)sampleAccountsAsSearchResults;

@end
