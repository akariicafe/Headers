@class NSString, NSArray;

@interface GEODefaultPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {
    NSArray *_sortedPhotoInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortedPhotoInfoFromPhotoVersions:(id)a0;

- (void).cxx_destruct;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (int)designatedURLType;
- (id)initWithPhotoContent:(id)a0;
- (id)largestPhoto;
- (double)sizeRatio;

@end
