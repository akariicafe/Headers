@class NSString;

@interface _FAFamilyCircleRequestConnectionFactory : NSObject <FAFamilyCircleRequestConnectionFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createServiceConnectionWithInterruptionHandler:(id /* block */)a0 invalidationHandler:(id /* block */)a1;

@end
