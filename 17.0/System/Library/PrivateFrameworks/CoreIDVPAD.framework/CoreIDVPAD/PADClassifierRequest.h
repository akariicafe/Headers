@class NSArray;

@interface PADClassifierRequest : NSObject

@property (retain, nonatomic) NSArray *gestures;
@property (retain, nonatomic) NSArray *gestureTypes;
@property (nonatomic) unsigned long long minNumberOfGestures;

- (void).cxx_destruct;

@end
