@class UIImage, MKMapSnapshot;

@interface MKLookAroundSnapshot : NSObject {
    MKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) UIImage *image;

- (id)initWithSnapshot:(id)a0;
- (void).cxx_destruct;

@end
