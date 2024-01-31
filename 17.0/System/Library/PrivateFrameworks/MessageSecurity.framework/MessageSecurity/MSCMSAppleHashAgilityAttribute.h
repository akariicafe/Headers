@class NSData, MSOID;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSData *hashAgilityValue;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithHashAgilityValue:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
