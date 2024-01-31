@class NSString, NSURL, UARPController, HMMTRVendorMetadata;
@protocol HMMTRFileManager;

@interface HMMTRVendorMetadataStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) UARPController *uarpController;
@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithFileURL:(id)a0;
- (void)supportedAccessories:(id)a0 forProductGroup:(id)a1;
- (void).cxx_destruct;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)fetchCloudMetadata;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)_addProductInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_addVendorInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_saveMetadata:(id)a0;
- (id)initWithFileURL:(id)a0 uarpController:(id)a1 fileManager:(id)a2;
- (id)staticMetadata;
- (id)staticMetadataFileURL;

@end
