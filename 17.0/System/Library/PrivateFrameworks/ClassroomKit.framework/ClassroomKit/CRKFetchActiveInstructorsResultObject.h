@class NSArray;

@interface CRKFetchActiveInstructorsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *instructors;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
