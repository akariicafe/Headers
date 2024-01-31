@class NSString, NSDate;

@interface _SFContextualRankedContactSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceApplication;
@property (readonly, copy, nonatomic) NSDate *rankDate;
@property (readonly, nonatomic) BOOL contactOnly;
@property (readonly, nonatomic) long long limit;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceApplication:(id)a0 rankDate:(id)a1 contactOnly:(BOOL)a2 limit:(long long)a3;

@end
