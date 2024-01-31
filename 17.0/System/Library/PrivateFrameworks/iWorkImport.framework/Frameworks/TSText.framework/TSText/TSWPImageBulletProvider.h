@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSArray *predefinedImages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataForImageBullet:(id)a0 withContext:(id)a1;
- (id)p_pathToPredefinedImages;
- (id)p_predefinedImageNames;
- (id)predefinedImageFilenamesWithContext:(id)a0;
- (id)predefinedImagesWithContext:(id)a0;

@end
