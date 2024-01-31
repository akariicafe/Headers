@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {
    XBApplicationSnapshot *_snapshot;
}

@property (readonly, nonatomic) long long interfaceOrientation;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0 interfaceOrientation:(long long)a1;

@end
