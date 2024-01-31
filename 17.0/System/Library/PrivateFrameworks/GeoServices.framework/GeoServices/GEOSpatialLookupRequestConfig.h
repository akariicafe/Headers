@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig {
    double _timeout;
}

- (unsigned long long)urlType;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;

@end
