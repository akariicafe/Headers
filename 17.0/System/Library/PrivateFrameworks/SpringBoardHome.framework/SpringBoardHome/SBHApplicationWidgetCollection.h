@class NSString, SBLeafIcon, NSArray;

@interface SBHApplicationWidgetCollection : NSObject <BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) SBLeafIcon *icon;
@property (copy, nonatomic) NSArray *widgetDescriptors;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (nonatomic, getter=isDisfavored) BOOL disfavored;
@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *iconImageApplicationBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (unsigned long long)indexOfWidgetDescriptorMatchingDescriptor:(id)a0;
- (BOOL)containsWidgetDescriptorMatchingDescriptor:(id)a0;
- (id)initWithIcon:(id)a0 galleryItems:(id)a1 vendorName:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
