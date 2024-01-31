@class NSString;

@interface PBUIWallpaperInactiveTreatment : NSObject <PBUIImageTreatment, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
