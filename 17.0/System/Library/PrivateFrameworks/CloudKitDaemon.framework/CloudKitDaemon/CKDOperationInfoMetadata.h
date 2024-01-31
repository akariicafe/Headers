@class NSDate, NSNumber, CKOperationInfo;

@interface CKDOperationInfoMetadata : NSObject

@property (readonly, nonatomic) CKOperationInfo *operationInfo;
@property (readonly, copy, nonatomic) NSDate *lastAttemptDate;
@property (readonly, copy, nonatomic) NSNumber *retryNumber;

- (void).cxx_destruct;
- (id)initWithOperationInfo:(id)a0 lastAttemptDate:(id)a1 retryNumber:(id)a2;

@end
