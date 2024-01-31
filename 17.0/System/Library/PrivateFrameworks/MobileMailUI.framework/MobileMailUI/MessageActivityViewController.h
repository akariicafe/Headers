@class NSString, NSObject;
@protocol OS_os_log;

@interface MessageActivityViewController : UIActivityViewController <EFLoggable> {
    BOOL _sourceIsManaged;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL sourceIsManaged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;

@end
