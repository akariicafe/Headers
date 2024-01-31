@class NSString, PKAddCarKeyPassConfiguration;

@interface PKCarKeyTerminalPairingCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAddCarKeyPassConfiguration *configuration;
@property (readonly, nonatomic) NSString *productIdentifier;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 productIdentifier:(id)a1;

@end
