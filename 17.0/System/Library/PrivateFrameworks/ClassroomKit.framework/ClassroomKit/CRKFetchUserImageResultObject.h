@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *userImageData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
