@class NSURL, LPMetadataProviderSpecializationContext;
@protocol LPMetadataProviderSpecializationDelegate;

@interface LPMetadataProviderSpecialization : NSObject

@property (weak, nonatomic) id<LPMetadataProviderSpecializationDelegate> delegate;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) LPMetadataProviderSpecializationContext *context;

+ (unsigned long long)specialization;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
+ (id)specializedMetadataProviderForMetadata:(id)a0 withContext:(id)a1;
+ (id)specializedMetadataProviderForResourceWithContext:(id)a0;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)start;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
