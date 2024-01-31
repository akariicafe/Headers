@class NSUUID, UIView;

@interface WFWorkflowRunViewSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) UIView *originView;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)initWithView:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)refresh;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateSourceView:(id)a0;

@end
