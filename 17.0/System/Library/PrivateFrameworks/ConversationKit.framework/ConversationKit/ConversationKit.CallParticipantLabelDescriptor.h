@class NSArray, NSString;

@interface ConversationKit.CallParticipantLabelDescriptor : NSObject <CNKCallParticipantLabelDescriptorProtocol> {
    void /* unknown type, empty encoding */ strings;
    void /* unknown type, empty encoding */ secondaryString;
    void /* unknown type, empty encoding */ localizedSenderIdentity;
}

@property (nonatomic, copy) NSArray *strings;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic) void /* unknown type, empty encoding */ layoutState;
@property (nonatomic) void /* unknown type, empty encoding */ isDynamic;
@property (nonatomic, copy) NSString *localizedSenderIdentity;

- (id)init;
- (void).cxx_destruct;

@end
