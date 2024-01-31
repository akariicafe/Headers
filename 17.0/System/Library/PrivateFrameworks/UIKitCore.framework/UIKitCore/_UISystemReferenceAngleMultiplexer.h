@class NSString;

@interface _UISystemReferenceAngleMultiplexer : NSObject <_UISSystemReferenceAngleDataSource>

@property (class, readonly, nonatomic) _UISystemReferenceAngleMultiplexer *sharedMultiplexer;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
