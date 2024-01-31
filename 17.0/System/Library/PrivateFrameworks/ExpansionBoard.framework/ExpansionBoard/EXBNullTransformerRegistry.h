@class NSString, NSMutableDictionary;

@interface EXBNullTransformerRegistry : NSObject <EXBDisplayTransformerRegistry, FBSDisplayTransformer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_identifierToTransformers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
