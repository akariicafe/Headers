@class NSArray, MUGroupedExternalActionController;

@interface MUExternalActionPair : NSObject

@property (readonly, nonatomic) NSArray *viewModels;
@property (readonly, nonatomic) MUGroupedExternalActionController *actionController;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 actionController:(id)a1;

@end
