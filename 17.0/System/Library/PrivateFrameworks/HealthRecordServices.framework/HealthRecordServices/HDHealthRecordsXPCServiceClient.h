@class NSString, _HKXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInvalidated;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)compareExistingPatientResourceData:(id)a0 incomingPatientResourceData:(id)a1 completion:(id /* block */)a2;
- (void)executeFHIRExtractionRequest:(id)a0 completion:(id /* block */)a1;
- (void)executeFHIRReferenceExtractionRequest:(id)a0 completion:(id /* block */)a1;
- (void)extractAttachmentContentFromFHIRResource:(id)a0 completion:(id /* block */)a1;
- (void)fetchSpotlightSearchResultsForQueryString:(id)a0 completion:(id /* block */)a1;
- (void)indexClinicalDocumentsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)optInDataForFHIRDocumentWithRequest:(id)a0 redactor:(id)a1 completion:(id /* block */)a2;
- (void)preprocessSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)preprocessSignedClinicalDataFHIRResourceObject:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)processSignedClinicalDataContextCollection:(id)a0 completion:(id /* block */)a1;
- (void)reprocessOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)rulesVersionForFHIRDocumentExtractionWithError:(id *)a0;
- (id)supportedFHIRConfigurationWithError:(id *)a0;

@end
