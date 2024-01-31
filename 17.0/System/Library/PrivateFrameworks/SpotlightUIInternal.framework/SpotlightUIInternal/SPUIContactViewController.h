@class SearchUIBackgroundColorView, NSString, NSArray;

@interface SPUIContactViewController : SPUIViewController <SearchUIBackgroundColorViewProtocol>

@property (retain) SearchUIBackgroundColorView *backgroundColorView;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL isBackgroundColorViewHidden;
@property (readonly, nonatomic) NSArray *preferredBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)viewContainingContent;
- (void)willUpdateFromResultsWithHighlightedResult:(id)a0 viewController:(id)a1;
- (void).cxx_destruct;
- (void)updateWithContactIdentifier:(id)a0 preferredBundleIdentifiers:(id)a1;

@end
