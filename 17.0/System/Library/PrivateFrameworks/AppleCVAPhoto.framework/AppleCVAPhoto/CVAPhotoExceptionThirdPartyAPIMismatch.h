@class NSString;

@interface CVAPhotoExceptionThirdPartyAPIMismatch : CVAPhotoExceptionBase {
    NSString *reasonStr;
}

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (int)getErrorCode;
- (id)getReasonStr;

@end
