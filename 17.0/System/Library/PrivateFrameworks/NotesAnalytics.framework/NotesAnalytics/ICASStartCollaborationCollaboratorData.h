@class NSString, NSNumber;

@interface ICASStartCollaborationCollaboratorData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *startInvitedCount;
@property (readonly, nonatomic) NSNumber *startAcceptedCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStartInvitedCount:(id)a0 startAcceptedCount:(id)a1;

@end
