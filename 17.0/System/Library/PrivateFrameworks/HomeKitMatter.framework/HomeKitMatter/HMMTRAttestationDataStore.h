@class NSArray, NSString, NSURL, UARPController;
@protocol HMMTRFileManager;

@interface HMMTRAttestationDataStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) UARPController *uarpController;
@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSArray *paaCertificates;
@property (readonly, copy) NSArray *cdCertificates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)attestationCertificates:(id)a0 forSubjectKeyIdentifier:(id)a1;
- (void)fetchCloudAttestationData;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (id)convertPEMtoDERforCertificate:(id)a0;
- (id)initWithFileURL:(id)a0 uarpController:(id)a1 fileManager:(id)a2;
- (void)saveWithPaaCertificates:(id)a0 cdCertificates:(id)a1;
- (id)staticAttestationData;
- (id)staticAttestationDataFileURL;

@end
