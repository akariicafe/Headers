@class NSObject, ACHRemoteTemplateAvailabilityKeyProvider, NSMutableDictionary;
@protocol OS_dispatch_queue, ACHTemplateAssetRegistryDelegate;

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate, ACHTemplateAssetSourceDelegate>

@property (retain, nonatomic) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider;
@property (retain, nonatomic) NSMutableDictionary *templateSourcesByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *templateAssetSourcesByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) NSObject<ACHTemplateAssetRegistryDelegate> *delegate;

- (void)templateAssetSourceDidUpdateAssets:(id)a0;
- (void)_setBundleURLsForAchievement:(id)a0;
- (void)deregisterTemplateSource:(id)a0;
- (void)templateSourceDidUpdateAssets:(id)a0;
- (void).cxx_destruct;
- (void)deregisterTemplateAssetSource:(id)a0;
- (void)populateResourcePropertiesForAchievement:(id)a0;
- (id)initWithRemoteTemplateAvailabilityKeyProvider:(id)a0;
- (void)registerTemplateSource:(id)a0;
- (void)registerTemplateAssetSource:(id)a0;

@end
