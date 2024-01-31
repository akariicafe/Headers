@interface CLFindMyAccessoryUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long overflowFlag;
@property (readonly) long long crashCount;
@property (readonly) double multiTime;
@property (readonly) double nearOwnerTime;
@property (readonly) double wildTime;
@property (readonly) long long soundCount;
@property (readonly) double soundTime;
@property (readonly) long long rangingCount;
@property (readonly) double rangingTime;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOverflowFlag:(long long)a0 crashCount:(long long)a1 multiTime:(double)a2 nearOwnerTime:(double)a3 wildTime:(double)a4 soundCount:(long long)a5 soundTime:(double)a6 rangingCount:(long long)a7 rangingTime:(double)a8;

@end
