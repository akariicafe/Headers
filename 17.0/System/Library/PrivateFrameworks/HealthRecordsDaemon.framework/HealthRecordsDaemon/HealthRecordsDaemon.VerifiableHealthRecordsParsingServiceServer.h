@interface HealthRecordsDaemon.VerifiableHealthRecordsParsingServiceServer : NSObject <HKVerifiableHealthRecordsParsingServiceInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ client;
}

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_parseDataSource:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
