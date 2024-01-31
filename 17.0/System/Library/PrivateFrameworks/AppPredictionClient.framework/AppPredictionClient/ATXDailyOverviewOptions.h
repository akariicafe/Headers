@interface ATXDailyOverviewOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long focusFilter;
@property (readonly, nonatomic) BOOL isModernDashboardLayout;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFocusFilter:(long long)a0 isModernDashboardLayout:(BOOL)a1;
- (BOOL)isEqualToATXDailyOverviewOptions:(id)a0;

@end
