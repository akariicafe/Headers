@class NSString;
@protocol WFUIPresenterHostInterface, WFUIPresenterInterface;

@interface WFUIPresenterLocalConnection : NSObject <WFUIPresenterConnection>

@property (readonly, nonatomic) id<WFUIPresenterInterface> presenter;
@property (nonatomic) id<WFUIPresenterHostInterface> host;
@property (readonly, nonatomic) BOOL isConnected;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (id)synchronousPresenterWithErrorHandler:(id /* block */)a0;

@end
