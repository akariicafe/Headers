@class NSString;

@interface TCOfficeFontInfo : NSObject

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL isBold;
@property (readonly, nonatomic) BOOL isItalic;

+ (id)officeFontInfoWithFullName:(id)a0 isBold:(BOOL)a1 isItalic:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFullName:(id)a0 isBold:(BOOL)a1 isItalic:(BOOL)a2;
- (id)officeName;

@end
