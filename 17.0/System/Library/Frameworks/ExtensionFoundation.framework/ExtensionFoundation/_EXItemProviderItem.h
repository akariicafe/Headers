@class NSString, NSUUID, NSError, NSCoder;
@protocol NSSecureCoding, NSObject;

@interface _EXItemProviderItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSSecureCoding> payload;
@property (retain) NSCoder *encodedPayload;
@property (readonly) NSString *typeIdentifier;
@property (readonly) NSUUID *payloadIdentifier;
@property (readonly) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIdentifier:(id)a0 error:(id)a1;
- (id)initWithTypeIdentifier:(id)a0 payload:(id)a1;
- (id)payloadOfClass:(Class)a0;
- (id)payloadOfClasses:(id)a0;

@end
