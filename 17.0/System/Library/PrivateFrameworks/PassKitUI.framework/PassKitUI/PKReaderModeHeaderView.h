@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface PKReaderModeHeaderView : PKTableHeaderView {
    PKPaymentSetupProduct *_product;
    NSArray *_resourceKeys;
    long long _context;
    NSDictionary *_readerModeResources;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_titleForState:(unsigned long long)a0;
- (id)_subtitleForState:(unsigned long long)a0;
- (void)_configureForCurrentState;
- (id)initWithState:(unsigned long long)a0 context:(long long)a1 product:(id)a2;

@end
