@class PFPosterLayout, NSDictionary, NSString;
@protocol NURenderStatistics;

@interface _PIPosterLayoutResult : _NURenderResult <PIPosterLayoutResult>

@property (retain, nonatomic) PFPosterLayout *layout;
@property (copy, nonatomic) NSDictionary *scores;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
