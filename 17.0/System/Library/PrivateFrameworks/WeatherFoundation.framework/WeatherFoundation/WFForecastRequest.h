@class NSDate, NSString, WFLocation, NSDateComponents, NSData, NSLocale;

@interface WFForecastRequest : WFTask

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSDateComponents *date;
@property (copy, nonatomic) WFLocation *location;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic) BOOL attachRawAPIData;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *trackingParameter;
@property (readonly, nonatomic) NSDate *onDate;

+ (id)forecastRequestForLocation:(id)a0 onDate:(id)a1 completionHandler:(id /* block */)a2;
+ (id)forecastRequestForLocation:(id)a0 date:(id)a1 completionHandler:(id /* block */)a2;
+ (id)forecastRequestForLocation:(id)a0 completionHandler:(id /* block */)a1;

- (void)handleResponse:(id)a0;
- (void)cleanup;
- (id)initWithLocation:(id)a0 onDate:(id)a1 completionHandler:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithLocation:(id)a0 date:(id)a1 completionHandler:(id /* block */)a2;

@end
