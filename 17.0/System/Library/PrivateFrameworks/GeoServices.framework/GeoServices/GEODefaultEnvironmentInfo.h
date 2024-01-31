@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (id)init;
- (BOOL)isActive;
- (id)_manifestURLString;
- (void)makeActive;

@end
