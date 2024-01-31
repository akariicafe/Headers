@class NSString, BlastDoorWallpaper, BlastDoorMorphology, BlastDoorAvatarImage;

@interface BlastDoorNickname : NSObject {
    void /* unknown type, empty encoding */ nickname;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;
@property (nonatomic, readonly) BlastDoorWallpaper *wallpaper;
@property (nonatomic, readonly) BlastDoorMorphology *pronouns;

- (id)init;
- (void).cxx_destruct;

@end
