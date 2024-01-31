@class NSString, NSDictionary;

@interface NTKArgonKeyDescriptor : NSObject <NSSecureCoding, NSCopying, NTKArgonJSONEncodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSDictionary *argon_JSONRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyDescriptorFromBundle:(id)a0;
+ (id)unfilteredKeyDescriptorFromBundle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithKey:(id)a0 fileName:(id)a1;
- (id)argon_initWithJSONRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
