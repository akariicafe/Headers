@class NSString, PTUtil;

@interface PTDisparityFilterPassThrough : NSObject <PTAbstractDisparityFilter> {
    PTUtil *_util;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (id)debugTextures:(id)a0;
- (id)debugTexturesNames;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
