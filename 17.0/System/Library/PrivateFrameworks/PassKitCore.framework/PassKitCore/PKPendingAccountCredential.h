@class NSString, PKAccountReferenceCredential;

@interface PKPendingAccountCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long feature;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) PKAccountReferenceCredential *credential;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (id)initWithCoder:(id)a0;
- (id)initForDatabase;
- (BOOL)representsPass:(id)a0;
- (id)initWithAccountCredential:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 feature:(unsigned long long)a1 sharingInstanceIdentifier:(id)a2;
- (id)initWithAccountReferenceCredential:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
