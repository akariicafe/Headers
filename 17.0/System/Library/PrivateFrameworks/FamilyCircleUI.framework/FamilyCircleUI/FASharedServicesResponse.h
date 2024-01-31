@class NSArray;

@interface FASharedServicesResponse : AAResponse

@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSArray *serviceGroups;
@property (readonly, nonatomic) BOOL locationAllowed;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)_initializeServicesMapWithGroups:(id)a0 andServices:(id)a1;
- (void)_setLocationAllowedWithLocation:(BOOL)a0;
- (void)_sharedServicesWithNoGrouping:(id)a0;

@end
