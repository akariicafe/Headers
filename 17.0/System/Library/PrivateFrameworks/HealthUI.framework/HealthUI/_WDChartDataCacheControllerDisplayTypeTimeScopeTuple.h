@class HKDisplayType;

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject <NSCopying> {
    HKDisplayType *_displayType;
    long long _timeScope;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayType:(id)a0 timeScope:(long long)a1;

@end
