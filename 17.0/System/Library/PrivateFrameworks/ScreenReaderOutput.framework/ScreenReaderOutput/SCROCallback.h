@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)object;
- (BOOL)isAtomic;
- (int)key;
- (void).cxx_destruct;
- (id)initWithKey:(int)a0 object:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
