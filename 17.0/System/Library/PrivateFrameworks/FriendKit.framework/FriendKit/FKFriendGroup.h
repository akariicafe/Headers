@class NSString, NSMutableArray;
@protocol FKFriendGroupDelegate;

@interface FKFriendGroup : NSObject {
    NSMutableArray *_friendsManager;
    unsigned long long _groupSize;
}

@property (weak, nonatomic) id<FKFriendGroupDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long selectedPosition;

- (BOOL)isFull;
- (id)init;
- (void)setFriends:(id)a0;
- (id)friends;
- (unsigned long long)count;
- (void).cxx_destruct;
- (BOOL)containsFriend:(id)a0;
- (long long)_firstEmptyPosition;
- (void)addFriend:(id)a0 error:(unsigned int *)a1;
- (id)displayNameForGroupWithSeparator:(id)a0;
- (id)friendAtPosition:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 groupSize:(unsigned long long)a1;
- (id)initWithGroupSize:(unsigned long long)a0;
- (unsigned long long)positionOfFriend:(id)a0;
- (void)removeFriendAtPosition:(unsigned long long)a0;
- (void)setFriend:(id)a0 atPosition:(unsigned long long)a1 error:(unsigned int *)a2;

@end
