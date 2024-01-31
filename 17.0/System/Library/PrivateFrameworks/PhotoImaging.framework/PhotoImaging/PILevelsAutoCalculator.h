@class NSString;

@interface PILevelsAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submit:(id /* block */)a0;
- (id)calculateSettingsForImageHistogram:(id)a0;
- (id)calculateSettingsForSingleChannelHistogram:(id)a0 suffix:(id)a1;

@end
