@class NSString, NSData, BlastDoorCombinedPluginAttachmentInfo;

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {
    void /* unknown type, empty encoding */ balloonPlugin_Payload;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSData *messagesAppBalloon;
@property (nonatomic, readonly) NSData *handwriting;
@property (nonatomic, readonly) NSData *linkPresentation;
@property (nonatomic, readonly) BlastDoorCombinedPluginAttachmentInfo *combinedPluginAttachmentInfo;
@property (nonatomic, readonly) NSData *digitalTouchBalloon;

- (id)init;
- (void).cxx_destruct;

@end
