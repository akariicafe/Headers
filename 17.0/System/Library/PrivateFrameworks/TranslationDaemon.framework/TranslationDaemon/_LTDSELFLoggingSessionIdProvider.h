@class NSDate, SISchemaUUID;

@interface _LTDSELFLoggingSessionIdProvider : NSObject {
    SISchemaUUID *_cachedSessionId;
}

@property (readonly, nonatomic) SISchemaUUID *sessionId;
@property (readonly, nonatomic) NSDate *dateSessionIdMostRecentlyAccessesOrCreated;

- (void).cxx_destruct;

@end
