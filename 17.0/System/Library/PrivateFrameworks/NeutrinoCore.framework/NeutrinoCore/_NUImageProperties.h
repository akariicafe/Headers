@class NSString, NSDictionary, NSURL, NUColorSpace, NUVersion, NSNumber;
@protocol NURAWImageProperties;

@interface _NUImageProperties : NSObject <NUImageProperties> {
    NSNumber *_gainMapHeadroomValue;
}

@property (retain) NSURL *url;
@property (retain) NSDictionary *metadata;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property struct { long long width; long long height; } size;
@property long long orientation;
@property (retain) NSString *fileUTI;
@property long long alphaInfo;
@property long long componentInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property (retain) id<NURAWImageProperties> rawProperties;
@property (readonly) BOOL isHDR;
@property (readonly) BOOL hasGainMap;
@property (readonly) double gainMapHeadroom;
@property (readonly) NUVersion *gainMapVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getGainMapHeadroom:(double *)a0 fromMetadata:(struct CGImageMetadata { } *)a1;
+ (BOOL)getGainMapVersionMajor:(unsigned long long *)a0 minor:(unsigned long long *)a1 fromMetadata:(struct CGImageMetadata { } *)a2;
+ (BOOL)getGainMapHeadroom:(double *)a0 fromMakerNote:(id)a1;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_computeGainMapHeadroom;

@end
