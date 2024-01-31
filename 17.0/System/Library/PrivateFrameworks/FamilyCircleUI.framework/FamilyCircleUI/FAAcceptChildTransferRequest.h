@class NSString;

@interface FAAcceptChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode;

- (id)urlString;
- (id)urlRequest;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;

@end
