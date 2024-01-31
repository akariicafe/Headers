@interface QSSMutableSetRequestOrigin : QSSSetRequestOrigin

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL enable_geo_location_features;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
