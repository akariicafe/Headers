@class NSString;

@interface SXCalendarEventActionSerializer : NSObject <SXActionSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLForAction:(id)a0 type:(long long)a1;
- (id)queryItemForName:(id)a0 value:(id)a1;

@end
