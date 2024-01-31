@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalResultObject : CATTaskResultObject

@property (nonatomic) long long numberOfDaysBeforeAutomaticRemoval;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumberOfDaysBeforeAutomaticRemoval:(long long)a0;

@end
