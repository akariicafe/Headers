@class SKUniform;

@interface SKUniformInfo : NSObject

@property unsigned long long seed;
@property unsigned long long textureTarget;
@property (retain) SKUniform *uniform;

- (id)init;
- (void).cxx_destruct;

@end
