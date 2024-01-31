@class NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming>

@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)a0 dateRange:(id)a1;
+ (id)transformationWithPersonalizer:(id)a0 timeInterval:(double)a1;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
