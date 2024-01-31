@class CAContext, NSString, FBSSceneIdentityToken;

@interface FBSSceneLayer : NSObject {
    CAContext *_context;
    unsigned int _contextID;
    double _level;
    FBSSceneIdentityToken *_keyboardOwner;
    long long _type;
    long long _alignment;
    NSString *_stringRepresentation;
}

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long alignment;

- (id)capture;
- (id)init;
- (unsigned long long)hash;
- (id)initWithContextID:(unsigned int)a0 level:(double)a1;
- (id)stringRepresentation;
- (void)dealloc;
- (BOOL)isCAContextLayer;
- (BOOL)isKeyboardLayer;
- (id)_init;
- (BOOL)isKeyboardProxyLayer;
- (id)initWithKeyboardContext:(id)a0;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithKeyboardOwner:(id)a0 level:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithWindowContext:(id)a0;

@end
