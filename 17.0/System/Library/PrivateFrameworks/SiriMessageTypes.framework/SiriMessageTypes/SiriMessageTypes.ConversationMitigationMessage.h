@class NSString;

@interface SiriMessageTypes.ConversationMitigationMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ isMitigated;
}

@property (nonatomic, readonly) NSString *description;

@end
