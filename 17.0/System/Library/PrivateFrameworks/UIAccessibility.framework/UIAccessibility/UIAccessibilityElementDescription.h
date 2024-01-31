@class NSString, NSArray, UIBezierPath, NSData, NSAttributedString;

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isAccessibleElement;
@property (nonatomic) unsigned long long traits;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSAttributedString *attributedLabel;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSAttributedString *attributedValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInContainerSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSArray *userInputLabels;
@property (retain, nonatomic) NSArray *attributedUserInputLabels;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) NSArray *customActionsForRemoteDevice;
@property (retain, nonatomic) NSData *elementRefData;
@property (retain, nonatomic) NSArray *accessibilityActionsForRemoteDevice;

+ (id)_descriptionWithAXElement:(id)a0;
+ (id)_descriptionWithLocalElement:(id)a0;
+ (id)descriptionWithElement:(id)a0 frameInContainerSpaceOrNil:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)convertToAccessibilityElementWithContainer:(id)a0;

@end
