@class NSMutableDictionary, AXGestureRecorderStyleProvider, AXGestureRecorderView, NSString, NSMutableArray, AXGestureRecorderFingerPathCollection;
@protocol AXGestureRecorderViewControllerDelegate;

@interface AXGestureRecorderViewController : UIViewController <AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate>

@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *fingerPathCollection;
@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *dynamicFingerPathCollection;
@property (nonatomic) BOOL shouldPreventFurtherRecording;
@property (nonatomic, getter=isTrackingTouches) BOOL trackingTouches;
@property (nonatomic) double trackingTouchesDidStartTimeInterval;
@property (nonatomic, getter=isInReplayMode) BOOL inReplayMode;
@property (nonatomic) unsigned long long replayTimestampIndex;
@property (nonatomic) unsigned long long replayTimestampsCount;
@property (retain, nonatomic) NSMutableArray *replayDynamicFingerPaths;
@property (retain, nonatomic) NSMutableDictionary *instantReplayTimestampIndexes;
@property (retain, nonatomic) NSMutableDictionary *instantReplayPartialFingerPaths;
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (weak, nonatomic) id<AXGestureRecorderViewControllerDelegate> delegate;
@property (readonly, nonatomic) AXGestureRecorderView *gestureRecorderView;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) long long recorderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_clearWeakReferencesWithOutlets;
- (void)gestureRecorderFingerPathCollection:(id)a0 didUpdateFingerPathAtIndex:(unsigned long long)a1;
- (void)_exitReplayMode;
- (void)_releaseOutlets;
- (void)gestureRecorderFingerPathCollection:(id)a0 didInsertFingerPathAtIndex:(unsigned long long)a1;
- (void)_advanceInstantReplayForStaticFingerAtIndex:(id)a0;
- (void)_advanceReplay;
- (void)_didFinishReplayingRecordedGesture;
- (void)_didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_didStopRecordingAtomicFingerPath;
- (void)_endInstantReplay;
- (void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)a0;
- (void)_freezeAllDynamicFingerPaths;
- (double)_maximumDurationOfRecordedGesture;
- (void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)a0;
- (void)_updateDynamicFingerPathsWithTouches:(id)a0 touchesDidEnd:(BOOL)a1;
- (BOOL)canToggleChromeForGestureRecorderView:(id)a0;
- (void)deleteAllFingerPaths;
- (void)freezeAllDynamicFingerPaths;
- (id)gestureRecorderView:(id)a0 dynamicFingerPathAtIndex:(unsigned long long)a1;
- (void)gestureRecorderView:(id)a0 setChromeVisible:(BOOL)a1;
- (void)hideStaticView;
- (BOOL)isChromeVisibleForGestureRecorderView:(id)a0;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)a0;
- (void)preventFurtherRecording;
- (id)recordedGesturePropertyListRepresentationWithName:(id)a0;
- (id)recordedReplayableGestureRepresentation;
- (void)reloadAllFingerPaths;
- (void)replayRecordedGesture;

@end
