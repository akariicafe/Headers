@class NSString, TUHandle;

@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic) long long revision;

- (unsigned long long)hash;
- (BOOL)isEqualToConversationLinkOriginator:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 revision:(long long)a1 handle:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
