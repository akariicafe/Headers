@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ESDownloadContext : NSObject

@property (readonly, nonatomic) NSString *attachmentUUID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ progressBlock;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)initWithAttachmentUUID:(id)a0 accountID:(id)a1 queue:(id)a2 downloadProgressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)updateProgressDownloadedByteCount:(long long)a0 totalByteCount:(long long)a1;

@end
