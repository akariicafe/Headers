@class NSString, PRSServerPosterPath;
@protocol BSInvalidatable, PRPosterExtensionDescribing;

@interface PBFGenericPosterDescriptorLookupInfo : NSObject <PBFPosterDescriptorLookupInfo, NSCopying> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSServerPosterPath *posterDescriptorPath;
@property (readonly, nonatomic) id<PRPosterExtensionDescribing> posterDescriptorExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)posterDescriptorLookupInfoForPath:(id)a0 extension:(id)a1;
+ (id)nullPosterDescriptorLookupInfo;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithPath:(id)a0 extension:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
