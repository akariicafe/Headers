@class NSString, STActivityAttribution;

@interface STBackgroundActivitiesStatusDomainBackgroundActivityAttribution : NSObject <NSSecureCoding, BSDebugDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *backgroundActivityIdentifier;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly, nonatomic) BOOL showsWhenForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithBackgroundActivityIdentifier:(id)a0 activityAttribution:(id)a1 showsWhenForeground:(BOOL)a2;
- (id)initWithBackgroundActivityIdentifier:(id)a0 activityAttribution:(id)a1;

@end
