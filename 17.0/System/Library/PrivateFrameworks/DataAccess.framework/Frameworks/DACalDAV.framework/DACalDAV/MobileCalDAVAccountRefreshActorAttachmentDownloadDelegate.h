@class NSString;

@interface MobileCalDAVAccountRefreshActorAttachmentDownloadDelegate : NSObject <DAEventsAttachmentDownloadConsumer> {
    id _retainedSelf;
    NSString *_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)downloadFinishedError:(id)a0;
- (void)beginDownload;
- (void)downloadProgressDownloadedByteCount:(long long)a0 totalByteCount:(long long)a1;
- (id)initWithAttachmentUUID:(id)a0;

@end
