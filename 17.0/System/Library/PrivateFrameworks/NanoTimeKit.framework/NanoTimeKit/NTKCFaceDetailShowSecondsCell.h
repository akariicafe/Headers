@class NTKEditOptionCollection;

@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell

@property (readonly, nonatomic) NTKEditOptionCollection *collection;
@property (readonly, nonatomic) long long mode;

+ (id)reuseIdentifier;

- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;

@end
