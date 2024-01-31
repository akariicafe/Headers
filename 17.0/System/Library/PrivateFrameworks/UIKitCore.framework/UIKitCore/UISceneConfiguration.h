@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _hadResolutionErrorsOnLoad;
@property (readonly, nonatomic) BOOL _isDefault;
@property (readonly, nonatomic) BOOL _fromPlist;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) Class delegateClass;
@property (retain, nonatomic) UIStoryboard *storyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithName:(id)a0 sessionRole:(id)a1;

- (id)init;
- (id)_initWithConfiguration:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)_initWithLoadErrorForSessionRole:(id)a0;
- (id)initWithName:(id)a0 sessionRole:(id)a1;

@end
