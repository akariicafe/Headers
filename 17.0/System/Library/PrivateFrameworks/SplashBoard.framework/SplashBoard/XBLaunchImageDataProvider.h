@class NSString, _FBSSnapshot, UIImage, XBSnapshotDataProviderContext;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {
    _FBSSnapshot *_snapshot;
    UIImage *_cachedImage;
}

@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
