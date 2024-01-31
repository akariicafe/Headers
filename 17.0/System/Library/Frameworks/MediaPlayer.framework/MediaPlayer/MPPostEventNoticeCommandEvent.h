@class NSString;

@interface MPPostEventNoticeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *eventType;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
