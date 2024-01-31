@class NSNumber, _ANEIOSurfaceObject;

@interface _ANEBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _ANEIOSurfaceObject *ioSurfaceObject;
@property (readonly, nonatomic) NSNumber *symbolIndex;
@property (readonly, nonatomic) long long source;

+ (id)new;
+ (id)bufferWithIOSurfaceObject:(id)a0 symbolIndex:(id)a1 source:(long long)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIOSurfaceObject:(id)a0 symbolIndex:(id)a1 source:(long long)a2;

@end
