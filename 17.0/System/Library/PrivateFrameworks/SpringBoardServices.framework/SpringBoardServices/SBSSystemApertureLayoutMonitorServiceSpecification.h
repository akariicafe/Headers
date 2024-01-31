@class NSString, BSServiceInterface, BSServiceQuality;

@interface SBSSystemApertureLayoutMonitorServiceSpecification : NSObject

@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;
@property (class, readonly, copy, nonatomic) BSServiceQuality *serviceQuality;

@end
