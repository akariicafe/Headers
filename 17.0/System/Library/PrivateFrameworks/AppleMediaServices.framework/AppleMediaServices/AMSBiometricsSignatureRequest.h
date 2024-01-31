@class NSString, AMSKeychainOptions, LAContext, ACAccount, AMSProcessInfo, NSDictionary;
@protocol AMSBagProtocol;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, copy, nonatomic) NSString *challenge;
@property (readonly, copy, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic, getter=isDualAction) BOOL dualAction;
@property (readonly, nonatomic) AMSKeychainOptions *keychainOptions;
@property (readonly, nonatomic) struct __SecAccessControl { } *localAuthAccessControlRef;
@property (readonly, nonatomic) LAContext *localAuthContext;
@property (readonly, nonatomic) NSDictionary *localAuthOptions;
@property (nonatomic, getter=shouldUseApplePayClassic) BOOL useApplePayClassic;
@property (nonatomic, getter=shouldUseAutoEnrollment) BOOL useAutoEnrollment;

+ (id)biometricsSignatureRequestForURLResponse:(id)a0 account:(id)a1 session:(id)a2 task:(id)a3 clientInfo:(id)a4 options:(id)a5 error:(id *)a6;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_localAuthOptions;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 challenge:(id)a2 localAuthContext:(id)a3 options:(id)a4 error:(id *)a5;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { } *)a0;

@end
