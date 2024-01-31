@class NSString;

@interface NSObservationSink : NSObject <NSObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleErrorsWithBlock:(id /* block */)a0;
+ (id)handleValuesWithBlock:(id /* block */)a0;


@end
