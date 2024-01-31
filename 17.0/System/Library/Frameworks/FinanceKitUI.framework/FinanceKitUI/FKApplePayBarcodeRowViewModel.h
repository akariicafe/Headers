@interface FKApplePayBarcodeRowViewModel : NSObject

@property (readonly, copy, nonatomic) id /* block */ cellConfigurationHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCell:(id)a0;
- (id)initWithCellConfigurationHandler:(id /* block */)a0;

@end
