@class NSString, NSDictionary, NSUUID, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDeviceIdentifierCache : NSObject {
    NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSUUID *_vendorIdentifierSeed;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
    NSURL *_identifiersFileURL;
}

@property (readonly) NSString *personaUniqueString;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (id)allIdentifiersNotDispatched;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (id)extractUUIDForKey:(id)a0;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (id)generateSomePerUserEntropyNotDispatched;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (id)initWithPersona:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (BOOL)deviceUnlockedSinceBoot;
- (id)applyPerUserEntropyNotDispatched:(id)a0 type:(long long)a1;
- (id)identifiersOfTypeNotDispatched:(long long)a0;
- (id)deviceIdentifierVendorSeed;

@end
