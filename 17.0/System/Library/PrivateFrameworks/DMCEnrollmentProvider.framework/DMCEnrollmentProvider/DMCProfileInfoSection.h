@class NSString, NSAttributedString;

@interface DMCProfileInfoSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *sectionFooter;
@property (copy, nonatomic) NSString *sectionText;
@property (copy, nonatomic) NSAttributedString *sectionAttributedText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 attributedText:(id)a2;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 text:(id)a2;

@end
