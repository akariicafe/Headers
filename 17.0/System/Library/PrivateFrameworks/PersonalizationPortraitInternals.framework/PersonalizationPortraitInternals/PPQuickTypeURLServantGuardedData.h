@class NSString, PPQuickTypeItem, TUConversationLink;

@interface PPQuickTypeURLServantGuardedData : NSObject {
    PPQuickTypeItem *_lastItem;
    TUConversationLink *_tuConversationLink;
    NSString *_lastBundleId;
}

- (void)reset;
- (void).cxx_destruct;

@end
