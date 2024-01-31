@class NSString, NSURL, CLLocation, NSDate;

@interface PFSharingRemakerOptions : NSObject <NSCopying>

@property (nonatomic) BOOL shouldStripLocation;
@property (nonatomic) BOOL shouldStripAllMetadata;
@property (nonatomic) BOOL shouldConvertToSRGB;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) BOOL shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) BOOL shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
