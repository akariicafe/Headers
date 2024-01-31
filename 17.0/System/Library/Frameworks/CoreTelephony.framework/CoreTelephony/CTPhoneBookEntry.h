@class NSString;

@interface CTPhoneBookEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isHidden;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *altNumber;
@property (retain, nonatomic) NSString *altText;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *group;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
