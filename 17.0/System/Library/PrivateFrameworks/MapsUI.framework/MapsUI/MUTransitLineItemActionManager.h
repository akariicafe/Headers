@interface MUTransitLineItemActionManager : NSObject <MKPlaceActionManagerProtocol, MKPlaceActionItemFooterBuilder> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ analyticsDelegate;
}

- (id)createFooterActions;
- (id)createRowActionsWithStyle:(unsigned long long)a0;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 analyticsDelegate:(id)a1;

@end
