@interface SNOptional : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ object;
@property (nonatomic, readonly) long long hash;

- (id)initWithObject:(id)a0;
- (id)init;
- (id)initEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqualToOptional:(id)a0;

@end
