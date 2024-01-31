@class NSString, BSServiceQuality, BSServiceInterface;

@interface CHSWidgetEventServiceSpecification : NSObject

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) BSServiceQuality *serviceQuality;
@property (class, readonly, nonatomic) BSServiceInterface *interface;

@end
