@class NSString;

@interface CRKMobileGestalt : NSObject

@property (class, readonly, nonatomic) CRKMobileGestalt *sharedGestalt;

@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) double mainScreenScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mainScreenSizeInPixels;
@property (readonly, nonatomic) unsigned long long availableBytes;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *productVersion;

- (id)answerForQuestion:(struct __CFString { } *)a0;
- (id)answerForQuestion:(struct __CFString { } *)a0 ofClass:(Class)a1;

@end
