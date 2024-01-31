@interface VCWRMHandler : NSObject {
    double _lastConnectionUnstableTime;
    double _WRMNotificationRequestTime;
}

@property (readonly) int localWRMLinkTypeSuggestion;
@property (readonly) int remoteWRMLinkTypeSuggestion;
@property (readonly) BOOL isRemoteDuplicating;
@property double localLinkTypeSuggestionChangeTime;

- (id)init;
- (unsigned char)processRemoteWRMSuggestion:(int)a0 isRemoteDuplicating:(BOOL)a1;

@end
