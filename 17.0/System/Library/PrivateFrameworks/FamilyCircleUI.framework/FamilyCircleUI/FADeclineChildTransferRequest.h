@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode;

- (id)urlString;
- (id)urlRequest;
- (BOOL)isUserInitiated;
- (void).cxx_destruct;

@end
