@class NSString, NSFileHandle;

@interface HDAttachmentFileHandleReader : NSObject <HDAttachmentReader> {
    NSFileHandle *_fileHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
