@class NSString, NSDictionary;

@interface BMStreamSyncPolicy : NSObject {
    long long _currentPlatform;
}

@property (nonatomic) BOOL supportsSharedDeviceSync;
@property (readonly, nonatomic) NSString *legacyDescriptor;
@property (readonly, nonatomic) NSDictionary *platformPolicies;

+ (id)syncableStreams;
+ (id)syncableStreamConfigurations;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)a0;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)a0 fromPlatform:(long long)a1;
- (id)initWithLegacyDescriptor:(id)a0 platformPolicies:(id)a1;
- (id)initWithPolicyDictionary:(id)a0 syncUUID:(id)a1 legacySyncID:(id)a2 eventClass:(Class)a3;
- (BOOL)supportsSyncingWithPlatform:(long long)a0 overTransport:(unsigned long long)a1 inDirection:(unsigned long long)a2;
- (BOOL)supportsSyncingWithPlatform:(long long)a0 overTransport:(unsigned long long)a1 inDirection:(unsigned long long)a2 fromPlatform:(long long)a3;
- (BOOL)supportsTransport:(unsigned long long)a0 direction:(unsigned long long)a1;
- (BOOL)supportsTransport:(unsigned long long)a0 direction:(unsigned long long)a1 fromPlatform:(long long)a2;

@end
