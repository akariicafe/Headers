@class NSString, NSUserActivity, UISceneActivationRequestOptions, UISceneSession;

@interface UISceneSessionActivationRequest : NSObject <BSDebugDescriptionProviding, NSCopying>

@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) UISceneSession *session;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (copy, nonatomic) UISceneActivationRequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)request;
+ (id)requestWithRole:(id)a0;
+ (id)requestWithSession:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)_initWithSession:(id)a0 role:(id)a1;

@end
