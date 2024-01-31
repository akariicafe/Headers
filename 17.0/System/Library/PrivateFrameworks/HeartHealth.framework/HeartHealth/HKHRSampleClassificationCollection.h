@class NSArray, NSNumber, NSString;

@interface HKHRSampleClassificationCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *classifications;
@property (copy, nonatomic) NSNumber *dayIndex;
@property (copy, nonatomic) NSString *majorityTimeZone;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithClassifications:(id)a0 dayIndex:(id)a1 majorityTimeZone:(id)a2;

@end
