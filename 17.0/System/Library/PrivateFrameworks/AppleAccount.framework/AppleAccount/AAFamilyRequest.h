@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
}

@property (readonly, nonatomic) BOOL isUserInitiated;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)a0 grandSlamAccount:(id)a1 accountStore:(id)a2;
- (id)_familyGrandSlamSigner;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1;
- (id)initWithGrandSlamSigner:(id)a0;

@end
