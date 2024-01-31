@class NSString;

@interface GEOResourceRequesterRemoteProxy : NSObject <GEOResourceRequesterProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchResources:(id)a0 force:(BOOL)a1 manifestConfiguration:(id)a2 auditToken:(id)a3 signpostID:(unsigned long long)a4 queue:(id)a5 handler:(id /* block */)a6;

@end
