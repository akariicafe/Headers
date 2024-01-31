@class NSString;

@interface PKProvisioningPaymentApplication : NSObject

@property (readonly, copy, nonatomic) NSString *appletTypeIdentifier;
@property (readonly, nonatomic) unsigned long long paymentType;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppletTypeIdentifier:(id)a0 paymentType:(unsigned long long)a1;

@end
