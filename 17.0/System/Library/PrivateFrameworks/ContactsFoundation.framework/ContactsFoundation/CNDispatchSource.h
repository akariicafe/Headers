@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CNDispatchSource : NSObject <CNCancelable> {
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
