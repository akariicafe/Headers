@class iconclassification, NSArray, NSString;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) iconclassification *mlModel;
@property (readonly, nonatomic) NSArray *iconClassLabels;
@property (nonatomic) BOOL writeDebugImage;
@property (retain, nonatomic) NSString *loggingName;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (id)mobileAssetType;
- (void)_initializeClassLabels;
- (id)_localizedClassForClass:(id)a0;
- (id)classLabelForIdx:(unsigned long long)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;

@end
