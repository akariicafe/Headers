@class NSMutableArray;

@interface BWAutoSuggestTracker : NSObject {
    NSMutableArray *_ObjectAreaIn;
}

@property (nonatomic) int objectType;
@property (nonatomic) int trackerID;
@property (nonatomic) long long combinedTrackerID;
@property (nonatomic) unsigned int confidenceLevel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) int validObjectCounter;
@property (retain, nonatomic) NSMutableArray *centersIn;
@property (retain, nonatomic) NSMutableArray *objectAreaIn;
@property (retain, nonatomic) NSMutableArray *centerVx;
@property (retain, nonatomic) NSMutableArray *centerVy;
@property (retain, nonatomic) NSMutableArray *centerDx;
@property (retain, nonatomic) NSMutableArray *centerDy;

- (id)init;
- (void)dealloc;

@end
