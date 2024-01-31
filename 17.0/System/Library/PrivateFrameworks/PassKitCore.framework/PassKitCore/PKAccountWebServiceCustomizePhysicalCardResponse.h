@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *artworkOptions;
@property (readonly, copy, nonatomic) NSArray *nameOptions;
@property (readonly, copy, nonatomic) NSArray *priceOptions;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
