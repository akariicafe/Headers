@class NSNumber;

@interface CTSMSSendInfoType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *error1;
@property (retain, nonatomic) NSNumber *error2;
@property (nonatomic) long long statusType;
@property (retain, nonatomic) NSNumber *recommendedRetryDelayInSeconds;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatusType:(long long)a0 error1:(int)a1 error2:(int)a2 delay:(int)a3;

@end
