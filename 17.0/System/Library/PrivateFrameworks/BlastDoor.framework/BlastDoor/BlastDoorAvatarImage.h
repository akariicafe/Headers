@class NSString, BlastDoorImage;

@interface BlastDoorAvatarImage : NSObject {
    void /* unknown type, empty encoding */ avatarImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) BlastDoorImage *image;

- (id)init;
- (void).cxx_destruct;

@end
