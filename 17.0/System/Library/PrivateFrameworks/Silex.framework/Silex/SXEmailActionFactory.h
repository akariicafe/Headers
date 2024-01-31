@class NSString;

@interface SXEmailActionFactory : NSObject <SXActionFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForAddition:(id)a0;
- (id)actionForURL:(id)a0;

@end
