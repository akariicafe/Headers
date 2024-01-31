@class NSString, NSURL, NSData;

@interface BlastDoorCombinedPluginAttachmentInfo : NSObject {
    void /* unknown type, empty encoding */ combinedPluginAttachmentInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *attachmentURL;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) unsigned long long expectedFileSize;
@property (nonatomic, readonly) NSData *encryptionKey;

- (id)init;
- (void).cxx_destruct;

@end
