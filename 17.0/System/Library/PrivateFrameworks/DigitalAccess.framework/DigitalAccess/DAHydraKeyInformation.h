@class NSArray, NSData;

@interface DAHydraKeyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *certificateChain;
@property (readonly) NSData *appletIdentifier;

+ (id)withEndpoint:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
