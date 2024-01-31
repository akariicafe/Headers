@class NSString;
@protocol NURenderStatistics;

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult>

@property struct { long long x; long long y; } point;
@property (retain, nonatomic) struct CGColor { } *color;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
