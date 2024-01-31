@class NSSet;

@interface MKFLocalBulletinConditionPresence : MKFLocalBulletinCondition

@property (nonatomic) long long presenceEventType;
@property (nonatomic) long long presenceEventUserType;
@property (retain, nonatomic) NSSet *userModelIDs;

+ (id)fetchRequest;

@end
