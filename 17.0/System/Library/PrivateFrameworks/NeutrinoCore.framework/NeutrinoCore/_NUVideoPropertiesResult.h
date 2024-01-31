@class NSString;
@protocol NURenderStatistics, NUVideoProperties;

@interface _NUVideoPropertiesResult : _NURenderResult <NUVideoPropertiesResult>

@property (retain) id<NUVideoProperties> properties;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
