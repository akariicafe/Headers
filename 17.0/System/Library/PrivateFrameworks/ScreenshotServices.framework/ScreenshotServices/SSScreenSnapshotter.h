@class UIScreen;

@interface SSScreenSnapshotter : NSObject

@property (readonly, nonatomic) UIScreen *screen;

+ (id)snapshotterForScreen:(id)a0;

- (id)takeScreenshot;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;

@end
