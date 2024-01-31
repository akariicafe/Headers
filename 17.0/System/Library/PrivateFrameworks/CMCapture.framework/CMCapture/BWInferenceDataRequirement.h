@interface BWInferenceDataRequirement : NSObject <NSCopying>

@property (readonly, nonatomic) long long identifier;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDataRequirement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
