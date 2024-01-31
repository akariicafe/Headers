@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSArray *predefinedImages;

+ (id)sharedInstance;

- (id)dataForImageBullet:(id)a0 withContext:(id)a1;
- (id)dataForDefaultImageBulletWithContext:(id)a0;
- (id)p_pathToPredefinedImages;
- (id)p_predefinedImageNames;

@end
