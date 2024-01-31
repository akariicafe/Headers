@class NSString, COClusterMember;

@interface COMessagingSessionInfo : NSObject

@property (readonly, copy, nonatomic) NSString *subTopic;
@property (readonly, copy, nonatomic) COClusterMember *member;
@property (readonly, nonatomic) BOOL producedSession;

- (void).cxx_destruct;
- (id)initWithSubTopic:(id)a0 member:(id)a1 produced:(BOOL)a2;

@end
