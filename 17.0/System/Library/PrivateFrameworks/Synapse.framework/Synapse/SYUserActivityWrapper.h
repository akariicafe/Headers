@class NSUserActivity;

@interface SYUserActivityWrapper : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUserActivity *userActivity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
