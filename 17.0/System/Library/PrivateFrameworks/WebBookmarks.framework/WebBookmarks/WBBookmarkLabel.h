@class NSString;

@interface WBBookmarkLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;

- (id)initWithTitle:(id)a0 address:(id)a1 pinned:(BOOL)a2;
- (id)labelWithTitle:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)labelWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)labelWithPinned:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
