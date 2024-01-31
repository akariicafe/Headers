@class NSArray, NSString;

@interface GameCenterUI.GKSuggestedPlayerGroup : NSObject {
    void /* unknown type, empty encoding */ players;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ messagesGroupIdentifier;
    void /* unknown type, empty encoding */ conversationIdentifier;
}

@property (nonatomic, copy) NSArray *players;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ source;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) BOOL fromPeopleSuggester;
@property (nonatomic, readonly) BOOL isNearby;

- (id)init;
- (void).cxx_destruct;

@end
