@class CLKComplicationPreviewTimelineEntry;

@interface NTKUVPreviewComplication : NTKComplication

@property (readonly, nonatomic) CLKComplicationPreviewTimelineEntry *entry;
@property (readonly, nonatomic) long long family;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)complicationWithEntry:(id)a0 forFamily:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithComplicationType:(unsigned long long)a0;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
