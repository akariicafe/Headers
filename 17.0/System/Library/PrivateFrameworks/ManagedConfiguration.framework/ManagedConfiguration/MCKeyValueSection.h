@class NSString, NSArray;

@interface MCKeyValueSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSArray *sectionKeyValues;

+ (id)sectionWithKeyValues:(id)a0;
+ (id)sectionWithLocalizedArray:(id)a0 title:(id)a1 footer:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 keyValues:(id)a2;

@end
