@protocol NSObject, NSCopying;

@interface BLSAlwaysOnTimelineUnconfiguredEntry : BLSAlwaysOnTimelineEntry

@property (nonatomic) long long requestedFidelity;
@property (retain, nonatomic) id<NSObject, NSCopying> timelineIdentifier;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) double duration;
@property (retain, nonatomic) id<NSObject> userObject;

+ (id)entryForPresentationTime:(id)a0 withRequestedFidelity:(long long)a1;
+ (id)entryForPresentationTime:(id)a0 withRequestedFidelity:(long long)a1 animated:(BOOL)a2 userObject:(id)a3;
+ (id)entryForPresentationTime:(id)a0;
+ (id)entryForPresentationTime:(id)a0 animated:(BOOL)a1 userObject:(id)a2;

@end
