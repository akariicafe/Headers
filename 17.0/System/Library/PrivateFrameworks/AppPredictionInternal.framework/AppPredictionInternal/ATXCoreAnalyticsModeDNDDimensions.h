@class NSString, NSNumber;

@interface ATXCoreAnalyticsModeDNDDimensions : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSNumber *isDND;

- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(id)a0 isDND:(BOOL)a1;
- (id)initWithMode:(id)a0 nullableIsDND:(id)a1;
- (id)powerset;

@end
