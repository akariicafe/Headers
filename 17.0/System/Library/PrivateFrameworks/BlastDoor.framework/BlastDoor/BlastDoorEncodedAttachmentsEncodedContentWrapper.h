@class NSString, BlastDoorEncodedAttachments_RawData, BlastDoorEncodedAttachments_EncodedAstc;

@interface BlastDoorEncodedAttachmentsEncodedContentWrapper : NSObject {
    void /* unknown type, empty encoding */ encodedAttachments_EncodedContent;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorEncodedAttachments_EncodedAstc *astc;
@property (nonatomic, readonly) BlastDoorEncodedAttachments_RawData *other;

- (id)init;
- (void).cxx_destruct;

@end
