@class NSString, NSData;

@interface IDSPushToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceLoggingHint;
@property (readonly, nonatomic) NSData *rawToken;

+ (id)pushTokenWithData:(id)a0;
+ (id)pushTokenWithData:(id)a0 withServiceLoggingHint:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 withServiceLoggingHint:(id)a1;
- (BOOL)isEqualToPushToken:(id)a0;

@end
