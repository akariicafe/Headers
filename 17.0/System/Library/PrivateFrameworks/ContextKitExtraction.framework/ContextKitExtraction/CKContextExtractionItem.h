@class NSString;

@interface CKContextExtractionItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *extractionSourceClassName;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)toJSONSerializableDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 type:(unsigned long long)a1 bundleIdentifier:(id)a2;

@end
