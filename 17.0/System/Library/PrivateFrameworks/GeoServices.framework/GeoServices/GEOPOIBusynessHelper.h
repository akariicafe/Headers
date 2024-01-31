@interface GEOPOIBusynessHelper : NSObject

+ (BOOL)_checkAvailablePOIForLocation:(id)a0 radius:(int)a1 minZoom:(unsigned char)a2 maxZoom:(unsigned char)a3 tiles:(id)a4 error:(id *)a5;
+ (id)_generateDPPOIBusynessForCoordinate:(struct { double x0; double x1; })a0 tileId:(unsigned long long)a1 dpBusynessTileURL:(id)a2 dayOfWeek:(unsigned int)a3 hourOfDay:(unsigned int)a4 radii:(id)a5 minZoom:(unsigned char)a6 maxZoom:(unsigned char)a7 tileIds:(id)a8 error:(id *)a9;
+ (id)_generateDPPOIBusynessForLocation:(id)a0 radii:(id)a1 minZoom:(unsigned char)a2 maxZoom:(unsigned char)a3 dpBusynessTiles:(id)a4 error:(id *)a5;
+ (void)checkIsEnabledForLocation:(id)a0 radius:(int)a1 workQueue:(id)a2 result:(id /* block */)a3;
+ (id)dpClientVersionHashWithMCPOIBusynessVersion:(id)a0;
+ (void)generateDPPOIBusynessForLocation:(id)a0 radii:(id)a1 workQueue:(id)a2 result:(id /* block */)a3;

- (id)init;

@end
