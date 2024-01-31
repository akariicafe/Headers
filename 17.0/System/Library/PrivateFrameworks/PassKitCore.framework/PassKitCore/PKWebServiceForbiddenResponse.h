@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
