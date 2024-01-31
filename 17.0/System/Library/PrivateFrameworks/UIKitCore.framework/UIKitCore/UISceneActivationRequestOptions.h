@class UIScene, NSString;

@interface UISceneActivationRequestOptions : NSObject <BSDebugDescriptionProviding, NSCopying>

@property (nonatomic) BOOL preserveLayout;
@property (nonatomic) long long _collectionJoinBehavior;
@property (nonatomic, setter=_setRequestFullscreen:) BOOL _requestFullscreen;
@property (retain, nonatomic) UIScene *requestingScene;
@property (nonatomic) long long collectionJoinBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
