@class NSString, HKQuantity;

@interface ACHAchievementProgressUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) HKQuantity *progressQuantity;
@property (retain) HKQuantity *goalQuantity;
@property (retain) NSString *templateUniqueName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCodable:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTemplateUniqueName:(id)a0 progressQuantity:(id)a1 goalQuantity:(id)a2;

@end
