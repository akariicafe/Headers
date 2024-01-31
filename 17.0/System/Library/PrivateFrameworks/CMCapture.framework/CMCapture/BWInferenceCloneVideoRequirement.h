@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying>

@property (readonly, nonatomic) BWInferenceVideoRequirement *sourceVideoRequirement;

- (id)initWithCloneVideoRequirement:(id)a0;
- (void)dealloc;
- (id)videoFormat;
- (id)description;
- (id)initWithAttachedMediaKey:(id)a0 sourceVideoRequirement:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
