@class NSString, NSNumber, NSArray;

@interface PSYActivityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *backboardPrelaunchBundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *machServiceName;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSNumber *timeoutSeconds;
@property (copy, nonatomic) NSArray *sessionTypes;
@property (copy, nonatomic) NSArray *dependentServices;
@property (copy, nonatomic) NSArray *dependentBuddyStages;

+ (id)activityWithPlist:(id)a0;
+ (unsigned long long)buddyStageValueForString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
