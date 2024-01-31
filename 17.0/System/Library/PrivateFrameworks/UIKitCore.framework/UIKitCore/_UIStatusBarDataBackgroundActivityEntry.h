@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry

@property (nonatomic) long long type;
@property (nonatomic) double displayStartDate;
@property (copy, nonatomic) NSString *detailString;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
