@class NSArray, NSLayoutConstraint;

@interface MapsEdgeConstraints : NSObject

@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (readonly, nonatomic) NSArray *allConstraints;

+ (id)edgeConstraintsWithTop:(id)a0 leading:(id)a1 bottom:(id)a2 trailing:(id)a3;

- (void).cxx_destruct;

@end
