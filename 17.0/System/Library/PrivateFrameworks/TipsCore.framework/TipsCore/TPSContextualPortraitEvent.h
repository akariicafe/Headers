@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)minObservationCount;

@end
