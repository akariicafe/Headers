@class NSString, NSDictionary;

@interface CMContinuityCaptureControl : NSObject <NSSecureCoding, NSCopying, CMContinuityCaptureDictionaryRepresentable> {
    id _value;
    NSString *_class;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly) long long entity;
@property (readonly, retain, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) struct { long long major; long long minor; long long patch; } minimumSupportedVersion;
@property (retain) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 attributes:(id)a1 entity:(long long)a2 minimumSupportedVersion:(struct { long long x0; long long x1; long long x2; })a3 value:(id)a4;

@end
