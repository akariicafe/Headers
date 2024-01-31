@class NSString;

@interface SYDocumentSender : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *preferredFormattedName;
@property (readonly, nonatomic) NSString *handle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 handle:(id)a1;
- (id)formattedNameWithStyle:(long long)a0;
- (id)personNameComponentsFormattedWithStyle:(long long)a0;

@end
