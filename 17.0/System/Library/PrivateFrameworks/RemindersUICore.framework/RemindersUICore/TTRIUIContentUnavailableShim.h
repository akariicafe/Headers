@protocol NSSecureCoding, NSCopying;

@interface TTRIUIContentUnavailableShim : NSObject <NSCopying, NSSecureCoding> {
    id<NSCopying, NSSecureCoding> _impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (Class)implClass;
+ (id)instanceWrappingImpl:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
