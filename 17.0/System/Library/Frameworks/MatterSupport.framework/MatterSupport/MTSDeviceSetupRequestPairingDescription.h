@class NSData, NSNumber;

@interface MTSDeviceSetupRequestPairingDescription : NSObject

@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSNumber *nodeID;

- (void).cxx_destruct;
- (id)initWithRootPublicKey:(id)a0 nodeID:(id)a1;

@end
