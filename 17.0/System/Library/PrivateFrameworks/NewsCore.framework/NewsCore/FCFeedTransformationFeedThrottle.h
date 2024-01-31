@class NSString;

@interface FCFeedTransformationFeedThrottle : NSObject <FCFeedTransforming>

@property (copy, nonatomic) id /* block */ condition;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithDailyLimit:(unsigned long long)a0 timeInterval:(double)a1 condition:(id /* block */)a2;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
