@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticDevice : NSObject {
    unsigned int _serviceIdentity;
    NSString *_identifier;
    id<NSCopying, NSObject, NSSecureCoding> _controllerIdentifier;
    NSString *_persistentIdentifier;
}

+ (id)devicePropertiesWithDescription:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
