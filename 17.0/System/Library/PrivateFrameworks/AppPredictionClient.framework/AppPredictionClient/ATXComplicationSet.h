@class NSArray, NSString;

@interface ATXComplicationSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithComplications:(id)a0 localizedTitle:(id)a1;
- (void).cxx_destruct;
- (id)initWithComplications:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
