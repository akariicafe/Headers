@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupIdentifiers:(id)a0;

@end
