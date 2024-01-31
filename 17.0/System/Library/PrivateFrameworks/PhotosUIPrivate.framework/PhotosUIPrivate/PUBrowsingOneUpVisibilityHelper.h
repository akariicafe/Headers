@class PUBrowsingViewModel, NSString;

@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver>

@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) BOOL isOneUpVisible;
@property (readonly, nonatomic) BOOL isPresentedForSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBrowsingViewModel:(id)a0 isPresentedForSecondScreen:(BOOL)a1;

@end
