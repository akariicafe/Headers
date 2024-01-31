@class NSString, NSAttributedString;

@interface PRXLabel : UILabel <PRXTextContainer>

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithStyle:(long long)a0;

- (id)initWithStyle:(long long)a0;

@end
