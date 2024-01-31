@class NSDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_keyToObjectDictionary;
    NSDictionary *_objectToKeyDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bidirectionalDictionary;

- (id)init;
- (unsigned long long)hash;
- (id)allKeys;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)keyForObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
