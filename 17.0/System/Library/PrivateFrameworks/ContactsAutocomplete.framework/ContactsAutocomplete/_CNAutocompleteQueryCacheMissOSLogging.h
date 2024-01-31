@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging>

@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
