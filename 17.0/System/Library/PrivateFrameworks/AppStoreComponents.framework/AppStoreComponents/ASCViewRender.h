@class NSSet, NSString, NSObject;
@protocol OS_os_log;

@interface ASCViewRender : NSObject <ASCSignpostGroup>

@property (class, readonly) NSSet *requiredFieldNames;
@property (class, readonly) NSString *subsystem;
@property (class, readonly) NSString *category;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resourceRequestDidBeginWithTag:(unsigned long long)a0;
+ (void)bootstrapDidBeginWithTag:(unsigned long long)a0;
+ (void)bootstrapDidEndWithTag:(unsigned long long)a0;
+ (void)jsCallDidBeginWithTag:(unsigned long long)a0;
+ (void)jsCallDidEndWithTag:(unsigned long long)a0;
+ (void)jsStackBootstrapDidBeginWithTag:(unsigned long long)a0;
+ (void)jsStackBootstrapDidEndWithTag:(unsigned long long)a0;
+ (void)launchCorrelationKeyWithTag:(unsigned long long)a0 withString:(id)a1;
+ (void)modelPrefetchDidBeginWithTag:(unsigned long long)a0;
+ (void)modelPrefetchDidEndWithTag:(unsigned long long)a0;
+ (void)overlayRequestedWithTag:(unsigned long long)a0;
+ (void)pageRequestedWithTag:(unsigned long long)a0;
+ (void)pageUserReadyWithTag:(unsigned long long)a0;
+ (void)requestDidBeginWithTag:(unsigned long long)a0;
+ (void)requestDidEndWithTag:(unsigned long long)a0;
+ (void)resourceRequestDidEndWithTag:(unsigned long long)a0;
+ (void)rootViewModelParseDidBeginWithTag:(unsigned long long)a0;
+ (void)rootViewModelParseDidEndWithTag:(unsigned long long)a0;
+ (void)rootViewModelPresentWithTag:(unsigned long long)a0;
+ (void)willEmitSignpostOfType:(long long)a0 withName:(id)a1;


@end
