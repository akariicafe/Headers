@class NSString;

@interface HMFPrivateObjectFormatter : NSFormatter <HMFPrivateDescriptionFormatter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)privateStringForObjectValue:(id)a0;

@end
