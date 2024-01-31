@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)lastKnownEstimateSet;
+ (id)currentEstimates;
+ (id)lastKnownEstimates;
+ (id)currentEstimateSet;

- (id)dictionary;
- (id)initWithCountryCode:(id)a0 priority:(unsigned int)a1 timestamp:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned int)getPriority;
- (void).cxx_destruct;
- (BOOL)priorityIsAtLeast:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
