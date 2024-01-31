@interface AXMCameraMetadataNode : AXMSourceNode

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)triggerWithCameraType:(long long)a0 cacheKey:(id)a1 resultHandler:(id /* block */)a2;

@end
