@class NSString;

@interface EXBDisplayTransformDescriptor : NSObject <NSCopying, NSMutableCopying, BSDescriptionStreamable>

@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, copy, nonatomic) NSString *derivedIdentifier;
@property (readonly, nonatomic, getter=isMainLike) BOOL mainLike;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)derivesDisplays;
- (BOOL)shouldTransformConnectingDisplays;
- (void)transformPhysicalDisplayWithBuilder:(id)a0;

@end
