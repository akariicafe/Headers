@class NSString, HDEncryptedArchive;

@interface HDAttachmentEncryptedReader : NSObject <HDAttachmentReader> {
    HDEncryptedArchive *_archive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
