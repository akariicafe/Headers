@class NSArray;

@interface CRKFetchSignInHistoryResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *history;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
