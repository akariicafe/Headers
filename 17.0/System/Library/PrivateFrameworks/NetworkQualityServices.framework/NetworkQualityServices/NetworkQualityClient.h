@interface NetworkQualityClient : NSObject

+ (void)findLocalMeasurementEndpoints:(id /* block */)a0;
+ (id)getXpcConn;
+ (void)performMeasurementWithConfiguration:(id)a0 reply:(id /* block */)a1;

@end
