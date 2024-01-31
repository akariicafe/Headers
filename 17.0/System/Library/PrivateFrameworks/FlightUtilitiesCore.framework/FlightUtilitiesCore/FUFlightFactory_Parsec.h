@class NSString;

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 userAgent:(id)a4 sessionID:(id)a5 completionHandler:(id /* block */)a6;
+ (void)loadFlightsWithNumber:(unsigned long long)a0 airlineCode:(id)a1 date:(id)a2 dateType:(long long)a3 userAgent:(id)a4 sessionID:(id)a5 completionHandler:(id /* block */)a6;


@end
