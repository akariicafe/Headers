@class NSString, NSData;

@interface BlastDoorIDSCommandResponse : NSObject {
    void /* unknown type, empty encoding */ iDSCommandResponse;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) BOOL has_messageId;
@property (nonatomic, readonly) long long messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) BOOL has_responseStatus;
@property (nonatomic, readonly) long long responseStatus;
@property (nonatomic, readonly) BOOL has_failReason;
@property (nonatomic, readonly) long long failReason;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) BOOL has_internalBuild;
@property (nonatomic, readonly) BOOL internalBuild;
@property (nonatomic, readonly) BOOL has_loggingProfile;
@property (nonatomic, readonly) BOOL loggingProfile;
@property (nonatomic, readonly) NSString *applicationId;
@property (nonatomic, readonly) BOOL has_requestType;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) NSData *idsSessionId;
@property (nonatomic, readonly) BOOL has_sharedSession;
@property (nonatomic, readonly) BOOL sharedSession;
@property (nonatomic, readonly) BOOL has_protocolVersion;
@property (nonatomic, readonly) long long protocolVersion;

- (id)init;
- (void).cxx_destruct;

@end
