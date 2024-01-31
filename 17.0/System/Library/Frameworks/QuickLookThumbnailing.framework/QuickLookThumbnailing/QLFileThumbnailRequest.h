@class NSURL, NSDictionary, NSString;

@interface QLFileThumbnailRequest : NSObject

@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long badgeType;
@property (retain, nonatomic) NSDictionary *generationData;
@property (copy, nonatomic) NSString *contentType;
@property int iconFlavor;
@property (nonatomic) int interpolationQuality;
@property (nonatomic) BOOL wantsLowQuality;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMaximumSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 iconFlavor:(int)a4 contentType:(id)a5 fileURL:(id)a6 generationData:(id)a7 interpolationQuality:(int)a8 wantsLowQuality:(BOOL)a9;

@end
