@class NSData, NSString;
@protocol NURenderStatistics;

@interface _PISliderNetLiftResult : _NURenderResult <PISliderNetLiftResult>

@property (copy) NSData *styleFeatureVectorData;
@property (copy) NSData *contentFeatureVectorData;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
