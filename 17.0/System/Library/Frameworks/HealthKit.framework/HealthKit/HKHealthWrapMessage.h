@class NSUUID, HKHealthWrapMessageConfiguration, NSURL, NSError, NSOutputStream, HKHealthWrapEncryptor, NSObject, _HKCompressionEngine, HKHealthWrapCodablePayloadHeader;
@protocol OS_dispatch_queue;

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination> {
    HKHealthWrapCodablePayloadHeader *_payloadHeader;
    NSUUID *_studyUUID;
    struct __SecCertificate { } *_certificate;
    _HKCompressionEngine *_compressionEngine;
    HKHealthWrapEncryptor *_encryptor;
    NSURL *_outputURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_encryptQueue;
    BOOL _compressionEnabled;
    BOOL _lastSuccess;
    NSError *_lastError;
}

@property (readonly, nonatomic) HKHealthWrapMessageConfiguration *configuration;

+ (id)newOutputFileURL;
+ (id)newOutputFileURLInDirectory:(id)a0;

- (void)_cleanup;
- (void)reset;
- (void)dealloc;
- (BOOL)startWithError:(id *)a0;
- (void)_finalize;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)finalizeWithError:(id *)a0;
- (id)_codableKeyValuePairsFromDictionary:(id)a0;
- (BOOL)_run:(id /* block */)a0 error:(id *)a1;
- (void)_writeDataToCompressor:(id)a0;
- (BOOL)appendData:(id)a0 error:(id *)a1;
- (BOOL)appendDataFromFileURL:(id)a0 error:(id *)a1;
- (id)initWithSenderUUID:(id)a0 studyUUID:(id)a1 channel:(id)a2 payloadType:(id)a3 startDate:(id)a4 endDate:(id)a5 payloadIdentifier:(id)a6 applicationData:(id)a7 certificate:(struct __SecCertificate { } *)a8;
- (void)receiveSinkContent:(id)a0;
- (void)sinkContentFinished;
- (BOOL)startWithOutputFileURL:(id)a0 error:(id *)a1;

@end
