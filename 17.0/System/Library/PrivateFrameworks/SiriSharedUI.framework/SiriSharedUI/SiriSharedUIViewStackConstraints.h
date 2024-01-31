@class NSLayoutConstraint;

@interface SiriSharedUIViewStackConstraints : NSObject

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;

+ (id)constraints;

- (void).cxx_destruct;

@end
