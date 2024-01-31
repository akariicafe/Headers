@class NSArray, NSDictionary, NSURL, NSString;

@interface _NUVideoProperties : NSObject <NUVideoProperties>

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct { long long width; long long height; } size;
@property (nonatomic) struct { long long width; long long height; } originalSize;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } cleanAperture;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } originalCleanAperture;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDictionary *colorProperties;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoKeyFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSArray *trackGroups;
@property (readonly) BOOL isHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;

@end
