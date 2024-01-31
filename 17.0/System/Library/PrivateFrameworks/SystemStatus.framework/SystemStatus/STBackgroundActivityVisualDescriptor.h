@class NSSet, NSString, STBackgroundActivityVisualDescriptorColorRepresentation;

@interface STBackgroundActivityVisualDescriptor : NSObject <BSDebugDescriptionProviding, NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *crossfadableActivities;
@property (readonly, nonatomic) BOOL prefersToSuppressPulse;
@property (readonly, copy, nonatomic) NSString *packageName;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *textLabel;
@property (readonly, nonatomic) STBackgroundActivityVisualDescriptorColorRepresentation *backgroundColorRepresentation;
@property (readonly, nonatomic) double verticalOffsetInPixels;
@property (readonly, nonatomic) double fontSizeAdjustment;
@property (readonly, nonatomic) BOOL prefersToRing;
@property (readonly, nonatomic) BOOL prefersToPulse;
@property (readonly, nonatomic) BOOL prefersToKeepContentVisible;
@property (readonly, copy, nonatomic) NSString *preferredVisualEffectName;
@property (readonly, copy, nonatomic) NSString *preferredContinuousAnimationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)a0;
+ (id)_defaultVisualDescriptors;

- (id)initWithPlistRepresentation:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (BOOL)canCrossfadeToBackgroundActivityWithIdentifier:(id)a0;

@end
