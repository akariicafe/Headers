@class NSString, EMObjectID, EMMessageObjectID, NSDate, EMMailboxScope;

@interface _EMUserActionState : NSObject

@property (retain, nonatomic) NSDate *viewingStarted;
@property (retain, nonatomic) EMMessageObjectID *messageObjectID;
@property (nonatomic) BOOL scrolledToEnd;
@property (copy, nonatomic) EMObjectID *key;
@property (copy, nonatomic) NSString *cellStyle;
@property (copy, nonatomic) NSString *messageListType;
@property (nonatomic) long long row;
@property (retain, nonatomic) EMMailboxScope *mailboxScope;

- (void).cxx_destruct;

@end
