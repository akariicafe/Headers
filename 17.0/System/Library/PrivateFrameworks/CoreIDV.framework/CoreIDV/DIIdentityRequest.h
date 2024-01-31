@class NSData, NSString;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityRequest : NSObject

@property (retain, nonatomic) id<DIIdentityDocumentDescriptor> descriptor;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *context;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 nonce:(id)a1;

@end
