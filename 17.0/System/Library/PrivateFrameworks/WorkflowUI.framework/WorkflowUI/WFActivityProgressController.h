@interface WFActivityProgressController : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ alertController;
}

@property (nonatomic) unsigned long long state;

- (id)init;
- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentFrom:(id)a0 cancellationHandler:(id /* block */)a1;

@end
