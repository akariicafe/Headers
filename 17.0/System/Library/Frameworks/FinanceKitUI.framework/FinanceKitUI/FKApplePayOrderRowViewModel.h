@class NSString;

@interface FKApplePayOrderRowViewModel : NSObject

@property (readonly, copy, nonatomic) id /* block */ cellConfigurationHandler;
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (readonly, copy, nonatomic) NSString *fulfillmentIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCell:(id)a0;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 fulfillmentIdentifier:(id)a2 cellConfigurationHandler:(id /* block */)a3;

@end
