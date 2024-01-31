@interface MDMHTTPTransaction : DMCHTTPTransaction

@property (readonly, nonatomic) BOOL isCheckIn;

+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;
+ (id)unauthorizedByServerError;

- (void)_commonInit:(struct __SecIdentity { } *)a0 timeout:(unsigned long long)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 rmAccountID:(id)a5;
- (id)initWithURL:(id)a0 data:(id)a1 identity:(struct __SecIdentity { } *)a2 pinnedCertificates:(id)a3 pinningRevocationCheckRequired:(BOOL)a4 signMessage:(BOOL)a5 isCheckin:(BOOL)a6 isShortTransaction:(BOOL)a7 rmAccountID:(id)a8;
- (id)initWithURL:(id)a0 downloadURL:(id)a1 identity:(struct __SecIdentity { } *)a2 pinnedCertificates:(id)a3 pinningRevocationCheckRequired:(BOOL)a4 signMessage:(BOOL)a5 isShortTransaction:(BOOL)a6 rmAccountID:(id)a7;
- (id)initWithURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedCertificates:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isShortTransaction:(BOOL)a5 rmAccountID:(id)a6;

@end
