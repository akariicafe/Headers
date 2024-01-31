@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (class, readonly, nonatomic) NSDictionary *defaultTitleAttributes;
@property (class, readonly, nonatomic) NSDictionary *emphasizedTitleAttributes;
@property (class, readonly, nonatomic) NSDictionary *supportingTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *defaultSubtitleAttributes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;

- (id)_titleForCoalescedWithSectionInfo:(id)a0;
- (id)_titleForCommentWithSectionInfo:(id)a0;
- (id)_titleForInvitationResponseWithSectionInfo:(id)a0 accepted:(BOOL)a1;
- (id)_titleForLikeWithSectionInfo:(id)a0;
- (void)requestTitleAndSubtitleForModel:(id)a0 completion:(id /* block */)a1;
- (id)subtitleForModel:(id)a0;
- (id)titleForModel:(id)a0;

@end
