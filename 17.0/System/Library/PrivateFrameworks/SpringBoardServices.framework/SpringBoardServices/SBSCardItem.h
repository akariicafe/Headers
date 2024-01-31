@class NSString, NSDictionary, NSData, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSData *iconData;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) BOOL requiresPasscode;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) UIImage *thumbnail;

- (unsigned long long)hash;
- (id)sortDate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 categoryIdentifier:(id)a1 iconData:(id)a2 title:(id)a3 subtitle:(id)a4 body:(id)a5 requiresPasscode:(BOOL)a6 bundleName:(id)a7 userInfo:(id)a8;
- (id)initWithIdentifier:(id)a0 iconData:(id)a1 title:(id)a2 body:(id)a3 requiresPasscode:(BOOL)a4 bundleName:(id)a5 userInfo:(id)a6;

@end
