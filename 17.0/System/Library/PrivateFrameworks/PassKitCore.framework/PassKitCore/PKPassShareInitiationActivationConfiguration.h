@class PKPassShareActivationOptions;

@interface PKPassShareInitiationActivationConfiguration : NSObject

@property (retain, nonatomic) PKPassShareActivationOptions *defaultOptions;
@property (retain, nonatomic) PKPassShareActivationOptions *availableOptions;
@property (nonatomic) BOOL allowUserEdit;
@property (nonatomic) BOOL isBlocked;

- (id)description;
- (void).cxx_destruct;

@end
