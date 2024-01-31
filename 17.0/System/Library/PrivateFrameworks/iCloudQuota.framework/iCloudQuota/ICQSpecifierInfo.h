@class NSString, ICQImageURL, NSURL, NSArray, ICQLink;

@interface ICQSpecifierInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) ICQImageURL *iconURL;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) ICQLink *icqLink;
@property (retain, nonatomic) NSArray *actions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
