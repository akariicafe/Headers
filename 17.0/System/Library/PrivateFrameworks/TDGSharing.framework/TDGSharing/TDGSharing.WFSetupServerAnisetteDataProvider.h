@interface TDGSharing.WFSetupServerAnisetteDataProvider : NSObject <NSSecureCoding, NSCoding, AKAnisetteServiceProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ session;
@property (nonatomic, retain) void /* unknown type, empty encoding */ companionAuthDevice;
@property (nonatomic, retain) void /* unknown type, empty encoding */ transportableAuthKitAccount;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;

@end
