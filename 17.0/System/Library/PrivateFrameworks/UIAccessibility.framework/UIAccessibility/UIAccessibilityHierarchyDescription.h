@class NSArray, UIAccessibilityElementDescription;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIAccessibilityElementDescription *rootElement;
@property (retain, nonatomic) NSArray *leafElements;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
