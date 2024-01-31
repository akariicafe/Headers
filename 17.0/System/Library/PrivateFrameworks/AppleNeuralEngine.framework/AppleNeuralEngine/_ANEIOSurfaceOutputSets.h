@class NSArray;

@interface _ANEIOSurfaceOutputSets : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __IOSurface { } *statsSurRef;
@property (readonly, nonatomic) NSArray *outputBuffer;

+ (id)new;
+ (id)objectWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

@end
