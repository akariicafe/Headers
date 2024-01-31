@class NSUUID, NSArray;

@interface IMChatContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) long long filterCategory;
@property (readonly, nonatomic, getter=isSpam) BOOL spam;
@property (readonly, nonatomic, getter=areSendersUnknown) BOOL sendersUnknown;
@property (readonly, nonatomic, getter=hasResponded) BOOL responded;
@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (readonly, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;

- (id)description;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
