@class NSString, NSArray;

@interface ECCMSRecipient : NSObject

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, copy, nonatomic) NSArray *capabilities;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 certificate:(struct __SecCertificate { } *)a1 capabilities:(id)a2;

@end
