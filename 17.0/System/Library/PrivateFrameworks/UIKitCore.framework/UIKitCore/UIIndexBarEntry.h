@class NSString, UIImage, NSIndexPath;

@interface UIIndexBarEntry : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *effectiveShortTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL hasPoundTitle;
@property (copy, nonatomic) NSString *shortTitle;

+ (id)entryWithTitle:(id)a0;
+ (id)entryForNumbers;
+ (id)_dotImageInView:(id)a0;
+ (id)_externalDotImageInView:(id)a0;
+ (id)entryForDotInView:(id)a0;
+ (id)entryForSearch;
+ (id)entryWithType:(long long)a0;

- (id)description;
- (void).cxx_destruct;

@end
