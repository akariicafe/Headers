@class NSString;
@protocol _UISceneBSActionHandler;

@interface _UIShareableContentSceneActionHandler : NSObject <_UISceneBSActionHandler>

@property (retain, nonatomic) id<_UISceneBSActionHandler> shareableContentActionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;

@end
