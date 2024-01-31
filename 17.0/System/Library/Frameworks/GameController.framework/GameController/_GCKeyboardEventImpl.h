@class NSString;

@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long usagePage;
@property (nonatomic) long long usage;
@property (nonatomic) long long down;
@property (nonatomic) unsigned long long sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
