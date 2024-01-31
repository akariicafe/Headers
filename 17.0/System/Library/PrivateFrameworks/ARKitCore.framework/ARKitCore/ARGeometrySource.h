@protocol MTLBuffer;

@interface ARGeometrySource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long format;
@property (nonatomic) long long componentsPerVector;
@property (nonatomic) long long offset;
@property (nonatomic) long long stride;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)componentSize;
- (id)initWithBuffer:(id)a0 count:(long long)a1 format:(unsigned long long)a2 componentsPerVector:(long long)a3 offset:(long long)a4 stride:(long long)a5;

@end
