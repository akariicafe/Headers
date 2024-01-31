@class NSString;

@interface PKAccountReferenceCredential : PKPaymentCredential

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long feature;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 feature:(unsigned long long)a1;
- (BOOL)supportsSuperEasyProvisioning;

@end
