@class NSString, NSError, NSMutableArray;

@interface _HDRemoteAuthorizationRequestRecord : NSObject {
    BOOL _didRecieveShouldPrompt;
    BOOL _shouldPrompt;
    NSString *_bundleID;
    NSString *_hostAppName;
    NSError *_shouldPromptError;
    NSMutableArray *_records;
}

- (void).cxx_destruct;

@end
