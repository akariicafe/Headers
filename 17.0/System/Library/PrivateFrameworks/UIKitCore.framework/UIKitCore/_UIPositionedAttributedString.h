@class NSAttributedString, UITextPosition;

@interface _UIPositionedAttributedString : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *string;
@property (readonly, nonatomic) UITextPosition *position;

+ (id)attributedString:(id)a0 atPosition:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
