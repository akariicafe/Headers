@class NSString, UIView;

@interface PXToastConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *iconSystemImageName;
@property (nonatomic) double autoDismissalDelay;
@property (nonatomic) BOOL canSwipeToDismiss;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
