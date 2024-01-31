@class NSString, NSArray;
@protocol DSSource;

@interface DSSubSource : NSObject <DSSource>

@property (retain, nonatomic) id<DSSource> parentSource;
@property (copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *resourceNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAllSharingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchSharedResourcesWithCompletion:(id /* block */)a0;
- (id)init:(id)a0 withResourceName:(id)a1;
- (void)stopSharing:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopSharingWithParticipant:(id)a0 completion:(id /* block */)a1;

@end
