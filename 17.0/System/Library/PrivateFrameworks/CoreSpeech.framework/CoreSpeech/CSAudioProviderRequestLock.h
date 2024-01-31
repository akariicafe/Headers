@class NSString;

@interface CSAudioProviderRequestLock : NSObject

@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) unsigned long long clientIdentity;

- (id)initWithClientIdentity:(unsigned long long)a0;
- (void).cxx_destruct;

@end
