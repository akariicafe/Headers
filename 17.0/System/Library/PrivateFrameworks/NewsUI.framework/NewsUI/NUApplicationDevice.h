@class UIApplication, UIScreen, NSString;

@interface NUApplicationDevice : NSObject <NUDevice>

@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=isSplitScreen) BOOL splitScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 screen:(id)a1;

@end
