@class NSString;

@interface HREStandardAsyncRecommendationSource : NSObject <HRERecommendationSource>

@property (readonly, nonatomic) Class generationProcessClass;
@property (readonly, nonatomic) unsigned long long disablingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dispatchProcess:(id)a0 options:(unsigned long long)a1 actionBlock:(id /* block */)a2;
- (id)recommendationsForHome:(id)a0 withServiceLikeItems:(id)a1 accessoryTypeGroup:(id)a2 options:(unsigned long long)a3;
- (void)setupProcess:(id)a0;

@end
