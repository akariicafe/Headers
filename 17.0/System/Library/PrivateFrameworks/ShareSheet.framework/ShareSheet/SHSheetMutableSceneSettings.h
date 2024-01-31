@class NSString, SHSheetUIServiceClientContext;

@interface SHSheetMutableSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) SHSheetUIServiceClientContext *sessionContext;
@property (retain, nonatomic) id sheetConfiguration;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long applicationState;
@property (nonatomic) long long hostProcessType;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
