@class NSString, HKProxyProvider;

@interface HKDatabaseControl : NSObject <_HKXPCExportable, HKDatabaseControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (id)healthDatabaseIdentifierWithError:(id *)a0;
- (void)hkqa_generateDemoDataWithDurationInDays:(long long)a0 completion:(id /* block */)a1;
- (void)hkqa_statisticsWithCompletion:(id /* block */)a0;
- (void)obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
