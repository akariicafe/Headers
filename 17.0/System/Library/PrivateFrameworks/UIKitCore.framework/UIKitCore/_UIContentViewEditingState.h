@class NSString;

@interface _UIContentViewEditingState : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *proposedReplacementText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } proposedReplacementRange;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 proposedReplacementText:(id)a1 proposedReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
