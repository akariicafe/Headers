@interface CRKClearSignInHistoryResultObject : CATTaskResultObject

@property (nonatomic) unsigned long long countOfRemovedRecords;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
