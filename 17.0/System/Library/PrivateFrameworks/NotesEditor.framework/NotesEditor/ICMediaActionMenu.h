@interface ICMediaActionMenu : NSObject {
    void /* unknown type, empty encoding */ completion;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isCameraAvailable;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isLiveTextAvailable;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPasswordProtected;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isInSecureScreen;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentingSourceView;
@property (nonatomic, readonly) BOOL hasSidecarMenuItems;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sidecarMenuController;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentingViewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentingBarButtonItem;

+ (id)menuWithIsCameraAvailable:(BOOL)a0 isLiveTextAvailable:(BOOL)a1 isPasswordProtected:(BOOL)a2 isInSecureScreen:(BOOL)a3 presentingViewController:(id)a4 presentingBarButtonItem:(id)a5 presentingSourceView:(id)a6 deferredChildren:(BOOL)a7 sidecarMenuController:(id)a8 completion:(id /* block */)a9;
+ (id)menuWithIsPasswordProtected:(BOOL)a0 isInSecureScreen:(BOOL)a1 presentingViewController:(id)a2 presentingBarButtonItem:(id)a3 presentingSourceView:(id)a4 sidecarMenuController:(id)a5 completion:(id /* block */)a6;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIsCameraAvailable:(BOOL)a0 isLiveTextAvailable:(BOOL)a1 isPasswordProtected:(BOOL)a2 isInSecureScreen:(BOOL)a3 presentingViewController:(id)a4 presentingBarButtonItem:(id)a5 presentingSourceView:(id)a6 sidecarMenuController:(id)a7 completion:(id /* block */)a8;
- (id)initWithIsPasswordProtected:(BOOL)a0 isInSecureScreen:(BOOL)a1 presentingViewController:(id)a2 presentingBarButtonItem:(id)a3 presentingSourceView:(id)a4 sidecarMenuController:(id)a5 completion:(id /* block */)a6;
- (id)makeMenu;
- (id)menuSections;
- (void)willShowMenu;

@end
