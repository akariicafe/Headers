@class NSString, UIImage, NSUUID;

@interface CNKNoticeRecipe : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *primaryActionTitle;
@property (readonly, copy, nonatomic) NSString *secondaryActionTitle;
@property (readonly, copy, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 primaryActionTitle:(id)a3 secondaryActionTitle:(id)a4;

@end
