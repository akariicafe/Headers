@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) int contentType;
@property (readonly, nonatomic) int contentTypeVersion;
@property (readonly, nonatomic) int contentTypeMinorVersion;
@property (readonly, nonatomic) int contentTypePatchVersion;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentType:(int)a0 contentTypeVersion:(int)a1 contentTypeMinorVersion:(int)a2 contentTypePatchVersion:(int)a3;

@end
