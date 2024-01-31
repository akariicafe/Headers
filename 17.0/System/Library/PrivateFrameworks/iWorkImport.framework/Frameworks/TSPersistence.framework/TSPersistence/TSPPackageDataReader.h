@class TSUOnce, TSPDocumentProperties, NSString, NSURL, SFUCryptoKey, NSData, TSPPackage;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {
    TSPPackage *_package;
    NSString *_lastPasswordAttempted;
    struct map<const std::string, TSP::DataInfo, std::less<const std::string>, std::allocator<std::pair<const std::string, TSP::DataInfo>>> { struct __tree<std::__value_type<const std::string, TSP::DataInfo>, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>>, std::allocator<std::__value_type<const std::string, TSP::DataInfo>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const std::string, TSP::DataInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _dataInfos;
    TSUOnce *_dataInfosDispatchOnce;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) SFUCryptoKey *lastDecryptionKeyAttempted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (readonly, nonatomic) BOOL requiresNetworkValidation;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setPassphrase:(id)a0;
- (id)initWithURL:(id)a0 decryptionKey:(id)a1;
- (void)performReadUsingAccessor:(id /* block */)a0;
- (struct CGImageSource { } *)newCGImageSourceAtRelativePath:(id)a0;
- (BOOL)checkPassword:(id)a0;
- (id)decryptionInfoForDataWithDigest:(id)a0;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (const void *)infoForDigest:(id)a0;
- (struct CGDataProvider { } *)newCGDataProviderAtRelativePath:(id)a0;
- (struct CGImage { } *)newCGImageAtRelativePath:(id)a0;
- (id)newDataCopyInputStreamProviderWithDigest:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)newDataCopyReadChannelProviderWithDigest:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)newDataCopyReadChannelProviderWithDigest:(id)a0 encryptionInfo:(id)a1 length:(out unsigned long long *)a2 error:(id *)a3;
- (id)newDataCopyURLProviderWithDigest:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)relativePathForDataWithDigest:(id)a0;

@end
