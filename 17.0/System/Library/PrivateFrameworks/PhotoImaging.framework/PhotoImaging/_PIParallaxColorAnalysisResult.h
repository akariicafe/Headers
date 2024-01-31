@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _PIParallaxColorAnalysisResult : _NURenderResult <PIParallaxColorAnalysisResult>

@property (nonatomic) double medianLuminance;
@property (copy, nonatomic) NSArray *dominantColors;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
