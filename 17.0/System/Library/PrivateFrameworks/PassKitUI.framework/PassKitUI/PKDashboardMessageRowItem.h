@class NSOrderedSet, NSString;
@protocol PKDashboardMessagesViewDelegate, NSCopying;

@interface PKDashboardMessageRowItem : NSObject <PKIdentifiable>

@property (retain, nonatomic) NSOrderedSet *messages;
@property (nonatomic) long long currentMessageIndex;
@property (readonly, weak, nonatomic) id<PKDashboardMessagesViewDelegate> messagesViewDelegate;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
