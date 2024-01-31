@class NSString, NSURL, UIImage, WFAirQualityProviderStation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WFAirQualityProviderAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long dataOrigination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logoImageLoadingQueue;
@property (retain, nonatomic) NSMutableArray *outstandingRequestsCompletionBlocks;
@property (nonatomic) BOOL logoRequestInFlight;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (copy, nonatomic) UIImage *cachedLogoImage;
@property (retain, nonatomic) WFAirQualityProviderStation *station;
@property (copy, nonatomic) NSURL *logoURL;

- (void)_initInternal;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 logoImage:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2;
- (id)initWithName:(id)a0 logoURL:(id)a1 dataOrigination:(long long)a2 station:(id)a3;
- (void)loadLogoImageWithCompletion:(id /* block */)a0;
- (BOOL)p_checkRequestInFlight;
- (void)p_clearRequestInFlight;
- (id)p_imageWithData:(id)a0;
- (void)p_invokeAndClearCompletionBlocksWithImage:(id)a0 error:(id)a1;
- (void)p_loadRemoteLogoImageForProvider:(id)a0 completion:(id /* block */)a1;
- (void)p_queueCompletionBlock:(id /* block */)a0;
- (void)p_setRequestInFlight;

@end
