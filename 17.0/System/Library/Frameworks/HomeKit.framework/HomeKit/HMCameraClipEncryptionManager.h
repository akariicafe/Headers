@class NSData;

@interface HMCameraClipEncryptionManager : NSObject

@property (readonly, copy) NSData *key;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)encryptedDataContextFromData:(id)a0;

@end
