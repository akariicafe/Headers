@class NSData, NSUUID, NSError;

@interface ISGenerationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSError *error;

- (id)initWithError:(id)a0;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
