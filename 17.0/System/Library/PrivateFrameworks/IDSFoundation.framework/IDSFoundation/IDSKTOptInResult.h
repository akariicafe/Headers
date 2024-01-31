@class NSArray, NSDictionary, NSData, NSError;

@interface IDSKTOptInResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSData *serverProvidedSMT;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *optedInOutURIs;
@property (readonly, nonatomic) NSDictionary *serverSMTByURI;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(BOOL)a0 optedInOutURIs:(id)a1 serverSMTByURI:(id)a2 error:(id)a3;
- (id)initWithSuccess:(BOOL)a0 serverProvidedSMT:(id)a1 error:(id)a2;

@end
