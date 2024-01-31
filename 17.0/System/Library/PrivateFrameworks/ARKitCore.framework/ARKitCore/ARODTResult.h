@interface ARODTResult : NSObject

@property (nonatomic) unsigned long long detectedObjectID;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (nonatomic) void *imageContext;
@property (nonatomic) double estimatedScaleFactor;

@end
