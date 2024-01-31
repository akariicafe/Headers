@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse

@property (readonly, nonatomic) NSData *xmlUIData;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)responseXMLData;
- (BOOL)bodyIsPlist;

@end
