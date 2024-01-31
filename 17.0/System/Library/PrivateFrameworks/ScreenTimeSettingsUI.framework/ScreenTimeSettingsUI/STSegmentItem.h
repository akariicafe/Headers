@class NSString, UIColor, UIImage;

@interface STSegmentItem : NSObject

@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIImage *detailImage;
@property (readonly, copy) UIColor *detailImageTintColor;
@property (copy) NSString *accessibilityText;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitleText:(id)a0 detailText:(id)a1 titleColor:(id)a2 detailImage:(id)a3 detailImageTintColor:(id)a4;

@end
