@interface UIActivityItemImageRep : NSObject

@property (retain, nonatomic) id asset;
@property (copy, nonatomic) id /* block */ thumbnailProvider;
@property (copy, nonatomic) id /* block */ dataProvider;

+ (id)activityItemImageRepWithAsset:(id)a0 thumbnailProvider:(id /* block */)a1 dataProvider:(id /* block */)a2;

- (id)data;
- (id)thumbnail;
- (void).cxx_destruct;

@end
