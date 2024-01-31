@class NSString, NSSet, NSArray, NSURL, NSUserActivity, UIView;

@interface SBSAppDragLocalContext : NSObject

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSSet *launchActions;
@property (readonly, nonatomic) long long startLocation;
@property (copy, nonatomic) NSSet *containedIconIdentifiers;
@property (copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier;
@property (copy, nonatomic) NSArray *customIconDataSourceConfigurations;
@property (nonatomic) unsigned long long gridSizeClass;
@property (copy, nonatomic) NSString *draggedSceneIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) UIView *portaledPreview;
@property (nonatomic) BOOL cancelsViaScaleAndFade;
@property (nonatomic, getter=isSourceLocal) BOOL sourceLocal;
@property (copy, nonatomic) NSString *droppedIconIdentifier;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithUniqueIdentifier:(id)a0 withLaunchActions:(id)a1 startLocation:(long long)a2;

@end
