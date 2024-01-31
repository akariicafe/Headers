@class NSDictionary;

@interface LKNSDictionaryCodingProxy : CACodingProxy {
    NSDictionary *_dict;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)decodedObject;
- (id)initWithCoder:(id)a0;

@end
