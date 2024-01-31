@class NSString, VSCredentialEntryViewModel;

@interface VSCredentialEntryButton : NSObject

@property (weak, nonatomic) VSCredentialEntryViewModel *owningViewModel;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
