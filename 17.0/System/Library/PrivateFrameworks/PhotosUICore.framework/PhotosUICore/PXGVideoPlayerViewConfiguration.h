@class PXVideoSession, NSString;

@interface PXGVideoPlayerViewConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) PXVideoSession *videoSession;
@property (readonly, nonatomic) BOOL toneMapToStandardDynamicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForRender;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideoSession:(id)a0 toneMapToStandardDynamicRange:(BOOL)a1;

@end
