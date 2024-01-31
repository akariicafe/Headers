@class NSString, NSObject;
@protocol TUWindowRestorationManagerDelegate;

@interface TUWindowRestorationManager : NSObject

@property (weak, nonatomic) id<TUWindowRestorationManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject *appKitWindow;
@property (readonly, nonatomic) NSString *windowFrameName;

- (void).cxx_destruct;
- (id)application;
- (void)didFinishRestoringWindows;
- (id)initWithPluginBundleName:(id)a0 windowFrameName:(id)a1 delegate:(id)a2;
- (void)setFrameName:(id)a0 forWindow:(id)a1 changeFrame:(BOOL)a2;
- (void)windowSceneDidBecomeVisible;

@end
