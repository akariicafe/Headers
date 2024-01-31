@class NSIndexPath, CKEntity;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject

@property (retain, nonatomic) CKEntity *entity;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long ackVoteCount;
@property (nonatomic) long long acknowledgmentType;

- (void).cxx_destruct;

@end
