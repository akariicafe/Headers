@class NSString;

@interface CCUISensorAttributionEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *executableDisplayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isSystemService;
@property (readonly, copy, nonatomic) NSString *displayNameForCompactView;

+ (id)attributionEntityFromSensorActivityData:(id)a0;
+ (id)genericLocationSystemServiceEntity;

- (unsigned long long)hash;
- (BOOL)isGenericLocationSystemServiceEntity;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)isWalletSpecialEntity;
- (BOOL)isKeyboardCameraEntity;
- (BOOL)isSetupApp;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSiriAndDictationEntity;
- (BOOL)isContinuityCaptureExtension;

@end
