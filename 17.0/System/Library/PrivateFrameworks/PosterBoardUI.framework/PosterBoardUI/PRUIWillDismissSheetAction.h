@class PRUIModalEntryPointResponse;

@interface PRUIWillDismissSheetAction : BSAction

@property (readonly, nonatomic) PRUIModalEntryPointResponse *response;

- (id)initWithResponse:(id)a0;

@end
