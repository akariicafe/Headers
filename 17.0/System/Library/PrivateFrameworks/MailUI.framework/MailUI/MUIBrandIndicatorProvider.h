@class NSString, EMMessageRepository, MUICachingSVGConverter, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MUIBrandIndicatorProvider : NSObject <EFLoggable, EFSignpostable>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) MUICachingSVGConverter *svgConverter;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

@end
