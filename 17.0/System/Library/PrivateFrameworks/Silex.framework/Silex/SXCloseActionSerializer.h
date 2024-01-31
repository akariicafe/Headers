@class NSString;

@interface SXCloseActionSerializer : NSObject <SXActionSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLForAction:(id)a0 type:(long long)a1;

@end
