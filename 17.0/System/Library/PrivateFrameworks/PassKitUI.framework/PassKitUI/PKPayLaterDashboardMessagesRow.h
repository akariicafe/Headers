@class NSString, NSOrderedSet;
@protocol PKDashboardMessagesViewDelegate, NSCopying;

@interface PKPayLaterDashboardMessagesRow : NSObject <PKPayLaterCollectionViewRow> {
    NSOrderedSet *_messages;
    long long _currentMessageIndex;
    id<PKDashboardMessagesViewDelegate> _messagesViewDelegate;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;
- (id)initWithMessages:(id)a0 currentMessageIndex:(long long)a1 messagesViewDelegate:(id)a2;

@end
