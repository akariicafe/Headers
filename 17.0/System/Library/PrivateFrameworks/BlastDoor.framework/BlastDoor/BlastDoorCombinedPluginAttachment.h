@class NSString, BlastDoorEncodedAttachments, BlastDoorBalloonPluginPayloadWrapper;

@interface BlastDoorCombinedPluginAttachment : NSObject {
    void /* unknown type, empty encoding */ combinedPluginAttachment;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorEncodedAttachments *attachments;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;

- (id)init;
- (void).cxx_destruct;

@end
