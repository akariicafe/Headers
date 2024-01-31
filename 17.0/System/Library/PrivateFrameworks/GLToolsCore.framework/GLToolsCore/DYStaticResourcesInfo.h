@class NSArray;

@interface DYStaticResourcesInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSArray *renderbuffers;
@property (retain, nonatomic) NSArray *framebuffers;
@property (retain, nonatomic) NSArray *buffers;
@property (retain, nonatomic) NSArray *vertexArrays;
@property (retain, nonatomic) NSArray *queries;
@property (retain, nonatomic) NSArray *shaders;
@property (retain, nonatomic) NSArray *programs;
@property (retain, nonatomic) NSArray *programPipelines;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;

@end
