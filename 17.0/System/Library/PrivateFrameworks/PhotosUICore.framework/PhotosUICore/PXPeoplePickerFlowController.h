@class UIBarButtonItem, NSArray, NSString, NSMutableArray, UIViewController;
@protocol PXPeopleFlowViewController, PXPeopleFlowDelegate;

@interface PXPeoplePickerFlowController : NSObject <PXPeopleFlowController>

@property (readonly, copy, nonatomic) NSArray *people;
@property (copy, nonatomic) NSArray *viewControllers;
@property (copy, nonatomic) NSArray *contexts;
@property (retain, nonatomic) NSMutableArray *bootstrappedSourceUUIDs;
@property (nonatomic) long long viewControllerIndex;
@property (nonatomic) double backingScaleFactor;
@property (weak, nonatomic) id<PXPeopleFlowDelegate> flowDelegate;
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) UIBarButtonItem *leftBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)done:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)_dataSource;
- (id)initWithPeople:(id)a0;
- (void)_computeViewControllersForPeople:(id)a0;
- (BOOL)_hasMergeCandidatesForDataSource:(id)a0 person:(id)a1;
- (id)initWithPeople:(id)a0 backingScaleFactor:(double)a1;

@end
