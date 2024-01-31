@class ACAccount;

@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void /* unknown type, empty encoding */ ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;

- (id)init;
- (void)signURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)accountInfoPayload;
- (id)initWithEphemeralAuthResults:(id)a0;

@end
