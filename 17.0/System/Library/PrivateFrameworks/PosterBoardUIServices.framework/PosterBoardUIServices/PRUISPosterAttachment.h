@class UIView;

@interface PRUISPosterAttachment : NSObject

@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) long long level;

+ (id)attachmentWithImage:(id)a0 level:(long long)a1;
+ (id)attachmentWithView:(id)a0 level:(long long)a1;

- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
