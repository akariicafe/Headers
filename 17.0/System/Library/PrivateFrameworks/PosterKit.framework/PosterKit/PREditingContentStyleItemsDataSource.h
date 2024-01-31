@class PREditorContentStylePickerConfiguration, NSArray, NSString;
@protocol PREditingContentStyleItemsDataSourceDelegate;

@interface PREditingContentStyleItemsDataSource : NSObject <PREditingContentStyleItemsDataSource>

@property (retain, nonatomic) PREditorContentStylePickerConfiguration *configuration;
@property (nonatomic) BOOL includeSuggestedStyle;
@property (retain, nonatomic) NSArray *coordinators;
@property (weak, nonatomic) id<PREditingContentStyleItemsDataSourceDelegate> delegate;
@property (nonatomic) double contentsLuminance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)buildCoordinators;
- (id)coordinatorForIndex:(unsigned long long)a0;
- (id)firstCoordinatorPassingTest:(id /* block */)a0;
- (unsigned long long)indexForCoordinator:(id)a0;
- (id)initWithConfiguration:(id)a0 includesSuggestedStyle:(BOOL)a1 delegate:(id)a2;
- (unsigned long long)numberOfCoordinators;

@end
