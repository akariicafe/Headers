@class HKUserTrackedConceptType;

@interface HKUserTrackedConcept : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKUserTrackedConceptType *userTrackedConceptType;

+ (id)_newUserTrackedConceptWithType:(id)a0 config:(id /* block */)a1;
+ (BOOL)isConcreteUserTrackedConceptClass;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
