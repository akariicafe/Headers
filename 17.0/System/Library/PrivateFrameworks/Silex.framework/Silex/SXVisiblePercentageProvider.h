@class NSString;

@interface SXVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding, SXVisiblePercentageReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double visiblePercentage;

- (id)initWithVisiblePercentage:(double)a0;
- (double)visiblePercentageOfObject:(id)a0;

@end
