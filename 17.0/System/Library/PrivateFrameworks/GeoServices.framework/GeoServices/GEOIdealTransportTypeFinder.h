@interface GEOIdealTransportTypeFinder : NSObject

+ (long long)idealTransportTypeForCoordinates:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1 mapType:(int)a2;
+ (long long)idealTransportTypeForOrigin:(struct { double x0; double x1; })a0 destination:(struct { double x0; double x1; })a1 mapType:(int)a2;
+ (long long)idealTransportTypeForMapType:(int)a0;
+ (long long)idealTransportType;
+ (id)_transportTypePreferenceAsString:(long long)a0;

@end
