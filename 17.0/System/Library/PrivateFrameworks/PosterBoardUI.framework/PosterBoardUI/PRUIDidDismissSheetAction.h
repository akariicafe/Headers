@class PRUIModalEntryPointResponse;

@interface PRUIDidDismissSheetAction : BSAction

@property (readonly, nonatomic) PRUIModalEntryPointResponse *response;

- (id)initWithResponse:(id)a0;

@end
