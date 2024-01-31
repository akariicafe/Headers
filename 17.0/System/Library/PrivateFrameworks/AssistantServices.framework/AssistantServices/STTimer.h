@class NSString, NSNumber, NSDate;

@interface STTimer : STSiriModelObject

@property (copy, nonatomic) NSString *timerId;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
