@class NSString, NSObject;
@protocol OS_os_log;

@interface AXPasscodeAccessor : NSObject

@property (readonly, nonatomic) NSString *passcode;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSObject<OS_os_log> *logFacility;

- (void).cxx_destruct;
- (struct __CFDictionary { } *)_newQuery;
- (BOOL)attemptToSetPasscode:(id)a0;
- (id)initWithServiceName:(id)a0 accountName:(id)a1 groupName:(id)a2 logFacility:(id)a3;

@end
