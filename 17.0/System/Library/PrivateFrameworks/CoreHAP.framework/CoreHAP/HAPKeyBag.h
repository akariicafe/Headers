@class NSString, NSArray;
@protocol HAPKeyStore;

@interface HAPKeyBag : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSArray *availableKeysToTry;
@property (readonly, weak, nonatomic) id<HAPKeyStore> keyStore;
@property (nonatomic) long long currentIndexInBag;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long totalIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)currentIdentity;
- (id)_populateBagWithPairingIdentitiesForAccessory:(id)a0 fromStore:(id)a1;
- (long long)getCurrentIndexInBag;
- (id)initWithAccessoryIdentifier:(id)a0 keyStore:(id)a1;
- (id)initWithAccessoryIdentifier:(id)a0 keyStore:(id)a1 controllerKeyList:(id)a2;
- (BOOL)isValidIndex:(long long)a0;
- (id)nextIdentity;
- (void)refreshKeys;

@end
