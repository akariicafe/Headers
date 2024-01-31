@interface BiometricEnrollOperation : BiometricOperation {
    struct { unsigned int usingAuthToken; unsigned int tokenLength; unsigned char token[32]; } _authData;
    struct { unsigned int type; unsigned char uuid[16]; } _deviceGroup;
}

@property (nonatomic) unsigned int userID;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned char x2[32]; } *authData;
@property (nonatomic) unsigned int processedFlags;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned char x1[16]; } *deviceGroup;

- (id)init;
- (int)type;
- (unsigned int)cancelledMessage;

@end
