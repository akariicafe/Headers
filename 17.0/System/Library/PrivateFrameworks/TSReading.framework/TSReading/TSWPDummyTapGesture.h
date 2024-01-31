@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSWPDummyTapGesture : NSObject <TSDGesture>

@property (retain, nonatomic) id<TSDGestureTarget> cachedGestureTarget;
@property (nonatomic) id<TSDGestureDelegate> gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (retain, nonatomic) TSDRep *targetRep;
@property (readonly, nonatomic) int gestureState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDone;
- (void)dealloc;
- (id)initWithKind:(id)a0;
- (struct CGPoint { double x0; double x1; })unscaledLocationForICC:(id)a0;
- (struct CGPoint { double x0; double x1; })boundsLocationForICC:(id)a0;
- (struct CGPoint { double x0; double x1; })naturalLocationForRep:(id)a0;

@end
