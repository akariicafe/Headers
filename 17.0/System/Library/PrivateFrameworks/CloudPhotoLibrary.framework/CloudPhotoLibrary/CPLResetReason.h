@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id asPlist;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL tentative;

- (id)initWithPlist:(id)a0;
- (id)reasonDescriptionWithNow:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 reason:(id)a1;
- (id)initWithCoder:(id)a0;

@end
