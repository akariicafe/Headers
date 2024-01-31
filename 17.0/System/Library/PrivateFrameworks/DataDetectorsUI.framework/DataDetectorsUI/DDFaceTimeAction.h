@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (BOOL)isAvailable;
+ (id)matchingScheme;

- (id)iconName;
- (id)localizedName;
- (id)notificationTitle;
- (id)dialRequest;

@end
