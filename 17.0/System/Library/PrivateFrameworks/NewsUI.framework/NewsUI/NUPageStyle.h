@class NSString, UIImage;

@interface NUPageStyle : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (nonatomic) BOOL hideToolbar;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
