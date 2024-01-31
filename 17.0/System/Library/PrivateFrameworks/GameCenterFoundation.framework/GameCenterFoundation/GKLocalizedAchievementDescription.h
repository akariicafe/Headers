@class NSString, GKGame;

@interface GKLocalizedAchievementDescription : GKAchievementDescription

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (void).cxx_destruct;
- (id)title;
- (id)achievedDescription;
- (id)imageNameForIcon;
- (id)unachievedDescription;
- (id)_localizedStringFromKey:(id)a0;

@end
