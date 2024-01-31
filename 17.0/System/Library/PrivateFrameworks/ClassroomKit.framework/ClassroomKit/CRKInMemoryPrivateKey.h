@class CRKIdentityConfiguration, NSData, NSString;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey>

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) struct __SecKey { } *underlyingPrivateKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
