@class NSString;

@interface OS_sysmon_row : OS_sysmon_object <OS_sysmon_row>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
