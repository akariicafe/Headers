@class NSString, SHSheetUIServiceClientContext;

@interface SHSheetSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) SHSheetUIServiceClientContext *sessionContext;
@property (readonly, nonatomic) id sheetConfiguration;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) long long applicationState;
@property (readonly, nonatomic) long long hostProcessType;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
