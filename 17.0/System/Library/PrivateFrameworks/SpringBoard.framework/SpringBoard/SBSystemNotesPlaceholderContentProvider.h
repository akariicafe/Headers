@class UIImage, NSString;
@protocol SBScenePlaceholderContentViewProviderDelegate;

@interface SBSystemNotesPlaceholderContentProvider : NSObject <SBScenePlaceholderContentViewProvider>

@property (retain, nonatomic) UIImage *snapshot;
@property (weak, nonatomic) id<SBScenePlaceholderContentViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSnapshot:(id)a0;
- (void).cxx_destruct;
- (id)sceneView:(id)a0 requestsPlaceholderContentViewWithContext:(id)a1;

@end
