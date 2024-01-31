@class NSURL, NSString, ICQLink;

@interface ICQiCloudDetailsPageInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSString *actionType;
@property (readonly, nonatomic) ICQLink *icqLink;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
