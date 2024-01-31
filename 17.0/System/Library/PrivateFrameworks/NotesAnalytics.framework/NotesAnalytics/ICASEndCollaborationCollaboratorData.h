@class NSString, NSNumber;

@interface ICASEndCollaborationCollaboratorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *endInvitedCount;
@property (readonly, nonatomic) NSNumber *endAcceptedCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithEndInvitedCount:(id)a0 endAcceptedCount:(id)a1;

@end
