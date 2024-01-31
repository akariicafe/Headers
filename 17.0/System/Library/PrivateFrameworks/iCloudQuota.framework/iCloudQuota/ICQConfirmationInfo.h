@class NSString, ICQImageURL, NSArray;

@interface ICQConfirmationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) ICQImageURL *iconURL;
@property (retain, nonatomic) NSArray *actions;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
