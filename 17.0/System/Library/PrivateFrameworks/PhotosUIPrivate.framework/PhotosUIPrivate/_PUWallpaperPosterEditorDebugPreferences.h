@class UIColor, UIFont, NSString;

@interface _PUWallpaperPosterEditorDebugPreferences : NSObject <PUMutableWallpaperEditorPreferences>

@property (retain, nonatomic) UIFont *timeFont;
@property (retain, nonatomic) UIColor *timeColor;
@property (retain, nonatomic) UIColor *statusBarTintColor;
@property (copy, nonatomic) NSString *currentLookName;
@property (nonatomic) unsigned long long currentLookIndex;
@property (nonatomic) unsigned long long numberOfLooks;

- (void).cxx_destruct;

@end
