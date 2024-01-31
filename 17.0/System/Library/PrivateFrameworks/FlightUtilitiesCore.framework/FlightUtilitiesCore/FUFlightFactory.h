@class NSString;

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)flightFactoryClassWithProvider:(id)a0;
+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 completionHandler:(id /* block */)a4;
+ (void)loadFlightDataWithFlightNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 completionHandler:(id /* block */)a4;
+ (void)loadFlightWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 userAgent:(id)a4 sessionID:(id)a5 completionHandler:(id /* block */)a6;

- (id)parseFlightData:(id)a0 withError:(id *)a1;

@end
