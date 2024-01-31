@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {
    long long _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}

+ (BOOL)supportsSecureCoding;

- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (id)contactIdentifier;
- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithStringValue:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1 contactIdentifier:(id)a2 contactInternalGUID:(id)a3;
- (id)_aceContextObjectValue;
- (id)contactInternalGUID;

@end
