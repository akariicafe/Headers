@class NSString, NSURL, NSDate, NTKPhotoAnalysis;

@interface NTKPhoto : NSObject <NSCopying> {
    NTKPhotoAnalysis *_analyses[8];
}

@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalCrop;
@property (readonly, nonatomic) NSString *uuidFromLocalIdentifierAndModificationDate;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (nonatomic) BOOL isIris;
@property (copy, nonatomic) NSURL *irisVideoURL;
@property (nonatomic) double irisDuration;
@property (nonatomic) double irisStillDisplayTime;
@property (readonly, nonatomic) BOOL isMissingAnalysis;

+ (id)decodeFromDictionary:(id)a0 forResourceDirectory:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqualToAsset:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPhoto:(id)a0;
- (id)analysisForAlignment:(unsigned long long)a0 deviceSizeClass:(unsigned long long)a1;
- (id)encodeAsDictionary;
- (id)initWithLegacySidecar:(id)a0;
- (void)setAnalysis:(id)a0 alignment:(unsigned long long)a1 deviceSizeClass:(unsigned long long)a2;

@end
