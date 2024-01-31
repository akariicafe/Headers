@interface SCNTimingFunction : NSObject <NSSecureCoding> {
    struct __C3DTimingFunction { } *_timingFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithCAMediaTimingFunction:(id)a0;
+ (id)functionWithTimingMode:(long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __C3DTimingFunction { } *)c3dTimingFunction;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction { } *)a0;

@end
