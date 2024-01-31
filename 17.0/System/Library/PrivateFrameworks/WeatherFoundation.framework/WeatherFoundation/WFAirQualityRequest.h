@class WFLocation, NSLocale;

@interface WFAirQualityRequest : WFTask

@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL attachRawAPIData;

+ (id)airQualityRequestForLocation:(id)a0 locale:(id)a1 completionHandler:(id /* block */)a2;

- (void)handleResponse:(id)a0;
- (void)cleanup;
- (id)options;
- (void).cxx_destruct;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithLocation:(id)a0 locale:(id)a1 completionHandler:(id /* block */)a2;

@end
