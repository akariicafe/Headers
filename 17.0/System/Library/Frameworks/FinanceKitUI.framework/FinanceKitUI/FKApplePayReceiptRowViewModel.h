@class NSString;

@interface FKApplePayReceiptRowViewModel : NSObject

@property (readonly, copy, nonatomic) id /* block */ cellConfigurationHandler;
@property (readonly, copy, nonatomic) id /* block */ cellSelectionHandler;
@property (readonly, copy, nonatomic) NSString *receiptName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCell:(id)a0;
- (void)didSelectCell;
- (id)initWithReceiptName:(id)a0 cellConfigurationHandler:(id /* block */)a1 cellSelectionHandler:(id /* block */)a2;

@end
