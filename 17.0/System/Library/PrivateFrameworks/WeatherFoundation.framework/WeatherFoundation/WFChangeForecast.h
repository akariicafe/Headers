@class NSString, NSDate;

@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *descriptionSameTimeZone;
@property (readonly, nonatomic) NSString *descriptionDifferentTimeZone;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 descriptionSameTimeZone:(id)a1 descriptionDifferentTimeZone:(id)a2;

@end
