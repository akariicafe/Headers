@class NSString, NSData, NSDate, SAMLLogoutRequestElement;

@interface SAMLLogoutRequest : XMLWrapperDoc {
    NSData *_schemaData;
}

@property (retain, nonatomic) SAMLLogoutRequestElement *requestElement;
@property (copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *notOnOrAfter;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)initWithElement:(id)a0 schema:(id)a1 error:(id *)a2;

@end
