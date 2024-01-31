@class NSString, BLSFrameSpecifierModel;
@protocol BLSBacklightSceneEnvironment;

@interface BLSAlwaysOnSession : NSObject <BSInvalidatable>

@property (retain) BLSFrameSpecifierModel *model;
@property (readonly, weak) id<BLSBacklightSceneEnvironment> environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnvironment:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)desiredFidelityForDateInterval:(id)a0 timelines:(id)a1 withCompletion:(id /* block */)a2;
- (void)performFrameSpecifiersRequest:(id)a0 timelines:(id)a1;
- (id)specifierForPresentationDate:(id)a0;

@end
