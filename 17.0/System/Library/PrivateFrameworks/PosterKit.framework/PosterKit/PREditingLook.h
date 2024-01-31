@class PREditingLookProperties, NSString, PRTimeFontConfiguration, PRPosterColor;

@interface PREditingLook : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) PREditingLookProperties *initialProperties;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *initialTitleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0;
- (id)initWithDisplayName:(id)a0 initialTimeFont:(id)a1 initialTitleColor:(id)a2;
- (id)initWithDisplayName:(id)a0 initialTimeFontConfiguration:(id)a1 initialTitleColor:(id)a2;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 initialTimeFont:(id)a2 initialTitleColor:(id)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 initialTimeFontConfiguration:(id)a2 initialTitleColor:(id)a3;
- (id)initWithLook:(id)a0;
- (id)titleStyleConfigurationWithExtensionBundle:(id)a0 luminance:(double)a1 timeNumberingSystem:(id)a2;

@end
