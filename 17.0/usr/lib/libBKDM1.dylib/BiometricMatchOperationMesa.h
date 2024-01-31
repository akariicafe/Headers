@interface BiometricMatchOperationMesa : BiometricMatchOperation {
    struct { unsigned int userID; unsigned char uuid[16]; } _extendEnrollmentIdentity;
    struct { unsigned int usingAuthToken; unsigned int tokenLength; unsigned char token[32]; } _extendEnrollmentAuthData;
}

@property (nonatomic) BOOL forExtendEnrollment;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned char x1[16]; } *extendEnrollmentIdentity;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned char x2[32]; } *extendEnrollmentAuthData;
@property (nonatomic) BOOL captureOnly;
@property (nonatomic) BOOL filterHomeButtonEvents;
@property (nonatomic) BOOL suppressHapticFeedback;
@property (nonatomic) BOOL requireFingerOff;

@end
