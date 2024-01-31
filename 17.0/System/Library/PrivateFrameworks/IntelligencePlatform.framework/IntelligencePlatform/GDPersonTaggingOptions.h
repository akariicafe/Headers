@class NSDictionary, GDPersonEntityTaggingOptionsInner;

@interface GDPersonTaggingOptions : NSObject {
    GDPersonEntityTaggingOptionsInner *inner;
}

@property (retain, nonatomic) NSDictionary *tagThresholds;

- (void).cxx_destruct;
- (id)initWithTagThresholds:(id)a0;

@end
