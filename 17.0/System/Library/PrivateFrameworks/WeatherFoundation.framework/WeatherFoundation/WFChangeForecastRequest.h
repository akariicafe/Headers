@class WFLocation;

@interface WFChangeForecastRequest : WFTask

@property (readonly, copy, nonatomic) WFLocation *location;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;

@end
