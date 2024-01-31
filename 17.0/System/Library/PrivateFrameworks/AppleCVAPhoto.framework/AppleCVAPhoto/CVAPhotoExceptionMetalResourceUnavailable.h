@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase

+ (id)throwIfNil:(id)a0;
+ (id)error;

- (id)init;
- (int)getErrorCode;
- (id)getReasonStr;

@end
