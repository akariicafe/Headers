@class NSString;
@protocol QLPreviewControllerConformingDataSource, QLPreviewItem, QLPreviewControllerConformingDelegate;

@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming>

@property (weak, nonatomic) id<QLPreviewControllerConformingDataSource> dataSource;
@property (weak, nonatomic) id<QLPreviewControllerConformingDelegate> delegate;
@property long long currentPreviewItemIndex;
@property (readonly) id<QLPreviewItem> currentPreviewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPreviewItem:(id)a0;
+ (id)requestPreviewMockSceneActivation;

- (id)init;
- (void)reloadData;
- (void).cxx_destruct;
- (void)dismissPreview;
- (void)presentPreview;
- (void)refreshCurrentPreviewItem;

@end
