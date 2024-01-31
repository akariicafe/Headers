@class NSString;

@interface _FBSCapturedSceneLayer : FBSSceneLayer <BSXPCCoding> {
    unsigned long long _captureTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithLayer:(id)a0;

@end
