@class NSDictionary, NSSet;

@interface RMStatusPublisherDescription : NSObject

@property (readonly, copy, nonatomic) NSDictionary *statusKeysByXPCEvent;
@property (readonly, copy, nonatomic) NSSet *statusKeys;

+ (id)descriptionWithEventsDictionary:(id)a0;
+ (id)descriptionWithServiceDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_validateStatusEvents:(id)a0;
- (BOOL)_validateStatusKeysByNotification:(id)a0;
- (id)initWithStatusEvents:(id)a0;
- (id)initWithStatusKeysByNotification:(id)a0;

@end
