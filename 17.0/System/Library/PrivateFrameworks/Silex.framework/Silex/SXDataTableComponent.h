@class SXDataRecordStore, SXJSONArray;

@interface SXDataTableComponent : SXComponent

@property (readonly, nonatomic) SXDataRecordStore *data;
@property (readonly, nonatomic) SXJSONArray *sortBy;
@property (readonly, nonatomic) unsigned long long dataOrientation;
@property (readonly, nonatomic) BOOL showDescriptorLabels;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (unsigned long long)dataOrientationWithValue:(id)a0 withType:(int)a1;
- (BOOL)showDescriptorLabelsWithValue:(id)a0 withType:(int)a1;

@end
