@class NSString, UIView;

@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *headerFooterView;
@property (readonly, nonatomic) double height;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 view:(id)a1 height:(double)a2;

@end
