@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (id)remoteObjectInterface;
- (void)connectionInterrupted;
- (id)init;
- (id)fetchGenderAndAgeGroupData;
- (void)connectionInvalidated;
- (void)fetchGenderAndAgeGroupData:(id /* block */)a0;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;
- (void)policiesToEnforce:(id /* block */)a0;
- (void)fetchConfigurationForClass:(id)a0 completion:(id /* block */)a1;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;

@end
